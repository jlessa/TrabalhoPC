#include <stdio.h>
#include <stdlib.h>
#include <math.h>
<<<<<<< HEAD
#include "string.h"

/*  // REMOVIDO POR CARLOS
#include "lua.h"
#include "lauxlib.h"
#include "luaconf.h"
#include "lualib.h"
#include "iup.h"
#include "iuplua.h"
=======
#include "aplot.h"
>>>>>>> 6fdc07c338c4a40b95dc2b11c802434cddc0835c


<<<<<<< HEAD
lua_State * L;
*/
=======
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
>>>>>>> 6fdc07c338c4a40b95dc2b11c802434cddc0835c

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
