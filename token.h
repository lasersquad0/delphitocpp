#ifndef __TOKEN_H__
#define __TOKEN_H__

#include "main.h"
#include "nmtbl.h"
#include "dprintf.h"

class token;
extern int   yylex();
//extern char  *yytext;
//extern int   yyleng;
extern token *curr_token;  

#define TAB_WIDTH 8


// Token definitions
enum lex_token {                
#define DEF_TOKEN(o,c,t,k) t,
#include "token.dpp"
  TKN_LAST 
}; 

// Special token TAGs < 0 !!!

enum category {
    CAT_ID,
    CAT_STR,  // string literal
    CAT_NUM,  // numeric literal (either int or double)
    CAT_KWD,
    CAT_WSPC, // white space and \n
    CAT_PUT,
    CAT_SPEC, // used for only one token dummy (see below) which is begin of MAIN token list
    CAT_GEN  // 'generated', means that for this token set_trans() was called.
};

class token : public heap_object {
  public:

  // First we define dl-list members
    token  *prev, *next;
    static token  dummy;	// Begin of MAIN token list

    static int   const token_cat[];
    static char* const token_name[];     

    enum token_attributes { 
	    fix_pos = 1, 
	    from_include_file = 2 
    }; 

    unsigned char  cat;		// Token category
    unsigned char  attr;    // Attribute of token
    unsigned short tag;		// Exact token code from enum lex_token
    unsigned short pos;		// Pos. within the line of token start
    unsigned int   line;    // short line;	// Line number where token was found 

    nm_entry*   name;       // Corresponded name entry (!=NULL for ID)
    char*       in_text;    // Input text representation of token
    char*       out_text;	// Output text representation of token
    char*       fname;      // Token file name
 
    token*      bind;       // token position of which is taken 	    
    token*      clone;      // cloned token 
    
    static char* resolve_name_conflict(char* str);

    token(token& t);
    token(int v_cat, int v_tag);
    token(char const* v_text, int v_tag = TKN_GEN, int v_line = 0, int v_pos = 0, nm_entry* nm = nullptr);

    // insert token this before t (returns this)
    token* insert_b(token* t) { 
        next = t; prev = t->prev;   
        return t->prev = t->prev->next = this;
    }

    // insert token this after t (returns this)
    token* insert_a(token* t) { 
        prev = t; next = t->next;
        return t->next = t->next->prev = this;
    }

    // remove token from DL-ring
    void   remove();
    
    static void remove(token* head, token* tail); 
    static void disable(token* head, token* tail); 

    // get first relevant token at line 
    token* get_first_token(); 

    token* prepend(char const* s) { 
        token* t = new token(s);
	    t->pos = pos;
        return t->insert_b(this);			    
    }
    token* append(char const* s) {
	    return (new token(s))->insert_a(this);
    }
    void   disable() { 
	    if (cat != CAT_WSPC || tag < TKN_GEN) { 
	        cat = CAT_WSPC; 
            tag = TKN_GEN; 
            out_text = nullptr; 
	    }
    }

    // disable token with all white spaces after it
    void   disappear(); 

    void   set_pos(token* t) { pos = t->pos; } 

    void   set_bind(token* t) { bind = t; } 

    // copy list of tokens before 'this' token, return pointer to clone of 'head' token 
    token* copy(token* head, token* tail); 

    // move list of tokens before 'this' token, return pointer to head
    token* move(token* head, token* tail); 

    // move region (together with comments and white spaces)
    token* move_region(token* head, token* tail); 
    
    static void swap(token* left_head, token* left_tail, token* right_head, token* right_tail); 

    token* next_relevant() const;
    token* prev_relevant() const;
    token* prev_not_space() const;
    token* next_not_space() const;

    static token* first_relevant() { return dummy.next_relevant(); }
    static token* last_relevant() { return dummy.prev_relevant(); }

    void set_trans (char const* str) { cat = CAT_GEN; out_text = (char*)str; }    

    virtual void print_debug() { fprintf(stderr, "%s, cat=%d, tag=%d", in_text, cat, tag); }

    static void input(char *file);
    static void output(char *file);

    static void reset() { dummy.next = dummy.prev = &dummy; curr_token = nullptr; }
};

class output_context { 
  private:
    FILE* f; 
    int   pos; 
    int   line;  
    int   prev_tag; 

  public:
    FILE* file() { return f; }
 
    void output(token* t); 
    output_context(char* file_name);
    ~output_context(); 
}; 

#endif


