#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "string.h"

/*  // REMOVIDO POR CARLOS
#include "lua.h"
#include "lauxlib.h"
#include "luaconf.h"
#include "lualib.h"
#include "iup.h"
#include "iuplua.h"

typedef int (*lua_CFunction) (lua_State *L);

lua_State * L;
*/

void metodoEuler(float x0, float y0,float h,int m,int id);
float f(float x, float y,int id);
void fSet(char * func);
float fGet(float x, float y);
void preditorCorretor(float x0,float y0,float h,int m,int id);
void rungeKuttaQuartaOrdem(float x0,float y0,float h,int m,int id);
void rungeKuttaSegundaOrdem(float x0,float y0,float h,int m,int id);
void rungeKuttaTerceiraOrdem(float x0,float y0,float h,int m,int id);
