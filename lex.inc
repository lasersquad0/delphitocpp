#pragma once

// Extracts file name from a string
// Automaticalle bypasses leading spaces and tabs
// Filename can be either in single quotes or without
// Allocates new buffer where file name is copied and returned, does not change src string

static char *get_filename(char *src, char* def_ext) {
    char *t = src;
    char *name = new char[strlen(src) + 8];
    char *dst = name;
    bool in_quotes = false;

    while (*t != '\0') if (*t++ == '\n') { line += 1; pos = 0; } // adjust line accordingly
    
    //if (strchr(src, '\n') != NULL) { //TODO what is two or three \n in this string?
    //    line += 1;
    //    pos = 0;
    //}

    while (*src == ' ' || *src == '\t') src++;  // skip leading spaces and tabs 
   
    if(*src == '\'') {
        in_quotes = true;
        src++;
    }

    //while (*src == '\'' || isspace(*src)) src++;   // Skip leading '[ ]
/*    if ((t = strchr (src, '[')) != NULL) {
#if 0
        int gid, uid, n;
        if (sscanf(t, "[%d,%d]%n", &gid, &uid, &n) == 2) {
            dst += sprintf(dst, "../%03d%03d/", gid, uid);
	    src = t + n;
        }
	else
#endif
	{
	    if ((t = strrchr(src, ']')) != NULL) {
	        src = t+1;
            }
        }
    }*/

    bool suffix = false;
    if (in_quotes)
        while(*src && *src != '\'' && *src != '\n' && *src != '}')
        {
            if (*src == '.') suffix = true;
	        *dst++ = (char)tolower(*(unsigned char*)src++);
        }
    else
        while(*src && !isspace(*src) && *src != ';' && *src != '\'' && *src!='\n' && *src != '}') // '\'' '\n' ';' and spaces are stoppers for extracting filename
        {
            if (*src == '.') suffix = true;
	        *dst++ = (char)tolower(*(unsigned char*)src++);
        }

    *dst = 0;
    if (!suffix) strcpy(dst, def_ext);

    if (scanner.find(name)) {
	    error(line, pos, file_name, "file %s already included !\n", name);
    }

    return name;
}

// Extracts condition string assuming that string is any IFDEF of directives
// Automaticalle bypasses leading spaces and tabs
// Allocates new buffer where condition str is copied and returned, does not change if_dir string
static char *extract_if_condition(char *if_dir) {
    char *start = if_dir;
    char *end;
    bool in_quotes = false;
    int len = 0;

    while (*start != '\0') {
        if (*start++ == '\n') { line += 1; pos = 0; } // adjust line counter accordingly 
        len++;
    }

    char *cond = new char[len];
    char *dst = cond;
    
    start = if_dir;
    while (*start != '\0') {
        if (*start == ' ' || *start == '\t') {
            while (*start == ' ' || *start == '\t') start++; // skip leading spaces and tabs 
            break;
        }
        else 
            start++;
    }
   
    end = start;

    while (*end != '\0' && *end != '}') end++;

    len = (int)(end - start);
    memcpy(cond, start, len);
    cond[len] = '\0';

    return cond;
}

static int process_end_of_line_comment() {
    char cmt_buf[1024];
    char* p = cmt_buf;
    int c;
    *p++ = '/';
    *p++ = '/';
    while((c = yyinput_file()) != EOF) {
        if (c == '\n') {
           *p++ = '\n';
           *p = '\0';
           curr_token = new token(NULL, TKN_CMNT, line, pos);
           curr_token->in_text = curr_token->out_text = ::mystrdup(cmt_buf);
           return 1;
        } else {
           *p++ = (char)c;
        }
    }
    error(line, pos, file_name, "EOF in comment !\n");
    return -1;
}

static int process_comments() {
    static int cmt_buf_len = 256;
    static char* cmt_buf = new char[cmt_buf_len]; // will be auto reallocated if not enough
    int c, pc = 0;
    char *p = cmt_buf;
    char cmt_start = *yytext;
    *p++ = '/';
    *p++ = '*';

    curr_token = new token(NULL, TKN_CMNT, line, pos);
    pos += (int)strlen(yytext);

    if (nested_comments) {
	    while((c = yyinput_file()) != EOF) {
	        if (c == '/' && pc == '*') c = ' ';
	    
            if (p == cmt_buf + cmt_buf_len) {
		        cmt_buf = (char*)realloc(cmt_buf, 2*cmt_buf_len);
		        p = cmt_buf + cmt_buf_len;
		        cmt_buf_len *= 2;
	        }

	        if ((cmt_start == '{' && c == '}') || (cmt_start == '(' && c == ')' && pc == '*')) // found comment closing brace
            {
		        size_t len = p - cmt_buf;
		        char* cmt_text = new char[len + 25]; // extra space for '*/', \0 and '#pragma comment(lib, ...)'
		        memcpy(cmt_text, cmt_buf, len);
		        cmt_text[len] = '\0';

                if (turbo_pascal && cmt_text[2] == '$') {
                    *p = '\0';
                    char *startcmp = cmt_text + 3;

                    if (strincmp(startcmp, "IFDEF", 5) == 0) {
                        sprintf(cmt_text, "#ifdef %s", cmt_buf + 9);
                    } else if (strincmp(startcmp, "IF ", 3) == 0) {
                        sprintf(cmt_text, "#if %s", cmt_buf + 6);
                    } else if (strincmp(startcmp , "ELSEIF", 6) == 0) { // ELSEIF should stay before ELSE 
                        sprintf(cmt_text, "#elif%s", cmt_buf + 9);
                    } else if (strincmp(startcmp, "ELSE", 4) == 0) {
                        sprintf(cmt_text, "#else%s", cmt_buf + 7);
                    } else if (strincmp(startcmp, "ENDIF", 5) == 0) {
                        sprintf(cmt_text, "#endif%s", cmt_buf + 8);
                    } else if (strincmp(startcmp, "IFEND", 5) == 0) {
                        sprintf(cmt_text, "#endif%s", cmt_buf + 8);
                    } else if (strincmp(startcmp, "IFNDEF", 6) == 0) {
                        sprintf(cmt_text, "#ifndef%s", cmt_buf + 9);
                    } else if (strincmp(startcmp, "DEFINE", 6) == 0) {
                        sprintf(cmt_text, "#define%s", cmt_buf + 9);
                    } else if (strincmp(startcmp, "UNDEF", 5) == 0) {
                        sprintf(cmt_text, "#undef%s", cmt_buf + 8);
                    } else if (strincmp(startcmp, "IFOPT", 5) == 0) {
		                int value = 1;
                        char* pp = strchr(cmt_buf + 8, '+');
		                if (pp != NULL) *pp = '\0';
		                else if ((pp = strchr(cmt_buf + 8, '-')) != NULL) {
			                value = 0;
			                *pp = '\0';
		                }
		                for (pp = cmt_buf + 8; *pp == ' '; pp++);
                        sprintf(cmt_text, "#if OPTION_%s == %d", pp, value);
                    } else if (strincmp(startcmp, "L ", 2) == 0) {
                        char* fname = get_filename(startcmp + 2, ".obj");
                        sprintf(cmt_text, "#pragma comment(lib, \"%s\")", fname);
		            } else if (strincmp(startcmp, "LINK ", 5) == 0) {
                        char* fname = get_filename(startcmp + 5, ".obj");
                        sprintf(cmt_text, "#pragma comment(lib, \"%s\")", fname); //TODO rest of text after filename will be lost
		            } else {
                        if (pc != '*') cmt_text[len++] = '*';
		                cmt_text[len++] = '/';
		                cmt_text[len] = '\0';
                    }
                }
                else
                {
                    if (pc != '*') cmt_text[len++] = '*';
		            cmt_text[len++] = '/';
		            cmt_text[len] = '\0';
                }

		        curr_token->in_text = curr_token->out_text = cmt_text;
		        return 1;
	        }

	        *p++ = (char)(pc = c);

	    } // while

    } else {  // !nested_comments
	    while((c = yyinput_file()) != EOF) {
	        if (c == '/' && pc == '*') c = ' ';

	        if (p == cmt_buf + cmt_buf_len) {
		        cmt_buf = (char*)realloc(cmt_buf, 2*cmt_buf_len);
		        p = cmt_buf + cmt_buf_len;
		        cmt_buf_len *= 2;
	        }
	        
            if (c == '}' || (c == ')' && pc == '*')) {
		        size_t len = p - cmt_buf;
		        char* cmt_text = new char[len + 3];
		        memcpy(cmt_text, cmt_buf, len);
		        if (pc != '*') cmt_text[len++] = '*';
		        cmt_text[len++] = '/';
		        cmt_text[len] = '\0';
		        curr_token->in_text = curr_token->out_text = cmt_text;
		        return 1;
	        }
	        *p++ = (char)(pc = c);
	    }
    }

    error(line, pos, file_name, "EOF in comment !\n");
    return -1;
}

// process include directive {$I filename.ext} and {$INCLUDE 'file name.ext' }
// start tells function where (offset) to start looking for filename (after $I or after $INLUDE word in yytext) 
static int process_include(int start) 
{  
    char *fname = get_filename(yytext + start, ".pas");
    char *xname = NULL;
    FILE *in = NULL;
    char *try_dir, *next_dir;
    int dir_length;

    for (try_dir = i_path; try_dir != NULL; try_dir = next_dir) {
	    if ((next_dir = strchr (try_dir, path_sep)) != NULL ) {
	        dir_length = (int)(next_dir - try_dir);
	        next_dir++;
	    } else {
	        dir_length = (int)strlen(try_dir);
	    }

	    xname = dprintf ("%.*s" FILE_SEP "%s", dir_length, try_dir, fname);
	    
        if ((in = fopen(xname, "r")) != NULL) {
	        include_level += 1;
	        scanner.push();
	        scanner.attach(xname, in);
	        curr_token = new token(xname, TKN_PUSH_FILE);
	        curr_token->out_text = fname;
	        return 1;
	    }
    }

    warning(line, pos, file_name, "can't include file '%s'", fname);
    curr_token = new token(dprintf("/*#include \"%s\"*/", fname), TKN_CMNT, line, pos);
    return 1;
}


static int process_if_directive(int tag)
{
    // we extract "condition text" even from ELSE and ENDIF directives because can be text there that is ignored by compiler but can contain important info for developers
    text = extract_if_condition(yytext);

    return tkn(tag);
}