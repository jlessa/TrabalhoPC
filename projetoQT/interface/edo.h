#include <stdio.h>
#include <stdlib.h>
#ifdef __cplusplus
    extern "C"
    {
#endif
    #include "lua.h"
	#include "lauxlib.h"
	#include "luaconf.h"
	#include "lualib.h"
#ifdef __cplusplus
	}
#endif


char* replace_str(char * str, const char * oldStr,const char * newStr);
char* math_replacement(char * str);
void metodoEuler(float x0, float y0,float h,int m,int id);
float f(float x, float y,int id);
void luaStart();
void luaEnd();
void fSet(char * func);
float fGet(float x, float y);
void preditorCorretor(float x0,float y0,float h,int m,int id);
void rungeKuttaQuartaOrdem(float x0,float y0,float h,int m,int id);
void rungeKuttaSegundaOrdem(float x0,float y0,float h,int m,int id);
void rungeKuttaTerceiraOrdem(float x0,float y0,float h,int m,int id);
