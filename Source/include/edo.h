#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "aplot.h"


#ifdef __cplusplus
	extern "C"{
#endif
	#include "lua.h"
	#include "lauxlib.h"
	#include "luaconf.h"
	#include "lualib.h"
#ifdef __cplusplus
	}
#endif

typedef int (*lua_CFunction) (lua_State *L);

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
