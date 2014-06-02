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

#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
#endif


char* replace_str(char * str, const char * oldStr,const char * newStr);
void math_replacement();
void addMathFunction();

float f1(float x, float y,int id);
void luaStart();
void luaEnd();
void fSet(char * func);
float fGet(float x, float y);
float f(float x,float y);
void preditorCorretor(float x0,float y0,float h,int m,float vx[],float vy[]);
void metodoEuler(float x0, float y0,float h,int m,float vx[],float vy[]);
void rungeKuttaQuartaOrdem(float x0,float y0,float h,int m,float vx[],float vy[]);
void rungeKuttaTerceiraOrdem(float x0,float y0,float h,int m,float vx[],float vy[]);
void rungeKuttaSegundaOrdem(float x0,float y0,float h,int m,float vx[],float vy[]);
void plot();
