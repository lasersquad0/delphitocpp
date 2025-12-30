@rem @set PROJDIR=c:\Users\Andrey\Documents\Embarcadero\Studio\Projects\BigInteger\Source
@rem @set IPATH=%PROJDIR%
@rem @set OPT=-nested -I %IPATH% -in %PROJDIR%\Velthuis.BigIntegers.pas -out Velthuis.BigIntegers.pas.cpp



@rem @set PROJDIR=C:\Program Files (x86)\Embarcadero\Studio\23.0\source\rtl\sys
@set PROJDIR=.
@set IPATH=%PROJDIR%
@set OPT=-preserve -nested -turbo -I "%IPATH%" 

delphitocpp.exe %OPT% -in %PROJDIR%\Test0.pas -out Test0.pas.cpp >log.log 2>&1 
@rem delphitocpp.exe %OPT% -in %PROJDIR%\DynamicArrays.pas -out DynamicArrays.pas.cpp >log.log 2>&1 
@rem delphitocpp.exe %OPT% -in %PROJDIR%\TestFunctions.pas -out TestFunctions.pas.cpp >log.log 2>&1 
@rem delphitocpp.exe %OPT% -in %PROJDIR%\TestClasses.pas -out TestClasses.pas.cpp >log.log 2>&1 
@rem delphitocpp.exe %OPT% -in %PROJDIR%\TestProperties.pas -out TestProperties.pas.cpp >log.log 2>&1 
@rem delphitocpp.exe %OPT% -in %PROJDIR%\TestRecords.pas -out TestRecords.pas.cpp >log.log 2>&1 
@rem delphitocpp.exe %OPT% -in %PROJDIR%\TestFromAI.pas -out TestFromAI.pas.cpp >log.log 2>&1 
@rem delphitocpp.exe %OPT% -in %PROJDIR%\TestExitOpAndInherited.pas -out TestExitOpAndInherited.pas.cpp >log.log 2>&1 
@rem delphitocpp.exe %OPT% -in "%PROJDIR%\System.pas" -out System.pas.cpp >log.log 2>&1 

@rem object_components <n_decl> 
@rem object_fields <n_decl>  -> field_decl_list <n_vdcl> -> var_decl
@rem                         -> field_decl_part -> VAR field_decl_list -> var_decl
@rem                         -> const_def_part -> CONST const_def_list -> const_def
@rem object_methods <n_decl> -> proc_fwd_decl <n_decl>  

@rem record_components <n_decl>
@rem record_fields <n_flds> = field_list <n_flds> -> fixed_part <n_vdcl>  =  var_decl_list <n_vdcl> -> var_decl
@rem                                              -> variant_part


