#ifdef __cplusplus
    extern "C"
    {
#endif
#include "edo.h"
#ifdef __cplusplus
    }
#endif

// Variável que armazena o estado do interpretador LUA
lua_State * L;

//Inicia a variável do interpretador e uma função padrão "x + y"
void luaStart(){
	L = luaL_newstate();
	luaL_openlibs(L);
    lua_pushnumber(L,2.71828182846);
    lua_setglobal(L,"e");
    lua_pcall(L, 0, 0, 0);
    fSet("x + y");
}
//Desaloca a variável do interpretador
void luaEnd(){
	lua_close(L);
}

//Função genérica de replace de string
char *replace_str(char * str, const char *old, const char * newStr)
{
    char *ret, *r;
    const char *p, *q;
    size_t oldlen = strlen(old);
    size_t count, retlen, newlen = strlen(newStr);

    if (oldlen != newlen) {
        for (count = 0, p = str; (q = strstr(p, old)) != NULL; p = q + oldlen)
            count++;
        /* this is undefined if p - str > PTRDIFF_MAX */
        retlen = p - str + strlen(p) + count * (newlen - oldlen);
    } else
        retlen = strlen(str);

    if ((ret = (char*)malloc(retlen + 1)) == NULL)
        return NULL;

    for (r = ret, p = str; (q = strstr(p, old)) != NULL; p = q + oldlen) {
        /* this is undefined if q - p > PTRDIFF_MAX */
        ptrdiff_t l = q - p;
        memcpy(r, p, l);
        r += l;
        memcpy(r, newStr, newlen);
        r += newlen;
    }
    strcpy(r, p);

    return ret;
}

//Possibilita chamar as funções matemáticas de LUA sem o "math." na frente.
char* math_replacement(char* str){
    str = replace_str(str,"abs","math.abs");
    str = replace_str(str,"acos","math.acos");
    str = replace_str(str,"asin","math.asin");
    str = replace_str(str,"atan","math.atan");
    str = replace_str(str,"atan2","math.atan2");
    str = replace_str(str,"ceil","math.ceil");
    str = replace_str(str,"cos","math.cos");
    str = replace_str(str,"cosh","math.cosh");
    str = replace_str(str,"deg","math.deg");
    str = replace_str(str,"exp","math.exp");
    str = replace_str(str,"floor","math.floor");
    str = replace_str(str,"fmod","math.fmod");
    str = replace_str(str,"frexp","math.frexp");
    str = replace_str(str,"huge","math.huge");
    str = replace_str(str,"dlexp","math.dlexp");
    str = replace_str(str,"log","math.log");
    str = replace_str(str,"log10","math.log10");
    str = replace_str(str,"max","math.max");
    str = replace_str(str,"min","math.min");
    str = replace_str(str,"modf","math.modf");
    str = replace_str(str,"pi","math.pi");
    str = replace_str(str,"pow","math.pow");
    str = replace_str(str,"rad","math.rad");
    str = replace_str(str,"random","math.random");
    str = replace_str(str,"randomseed","math.randomseed");
    str = replace_str(str,"sin","math.sin");
    str = replace_str(str,"sinh","math.sinh");
    str = replace_str(str,"sqrt","math.sqrt");
    str = replace_str(str,"tanh","math.tanh");
    str = replace_str(str,"tan","math.tan");
    return str;
}

//Analiza a função da string *func e a armazena na variável do interpretador de LUA
void fSet(char * func){
    func = math_replacement(func);
	char str[128];
	char * a = "f = function () return assert(";
	char * b = ") end";
    snprintf(str, sizeof str, "%s%s%s", a,func,b);
	if (luaL_loadstring(L, str) || lua_pcall(L, 0, 0, 0)){
		puts(lua_tostring(L, -1));
	}
}

//Depois de analizar uma string usando função 'fSet' acima, dá-se um valor de 'x' e 'y' e retorna o valor da função
float fGet(float x, float y){
	lua_pushnumber(L,x);
	lua_setglobal(L,"x");
	lua_pcall(L, 0, 0, 0);
	lua_pushnumber(L,y);
    lua_setglobal(L,"y");
	lua_pcall(L, 0, 0, 0);
	lua_getglobal(L, "f");
	lua_pcall(L, 0, 1, 0);
    float r = (float)lua_tonumber(L,-1);
    return r;
}

//float f(float x, float y){
//    return (1 - x + 4*y);
//}

/*
  float f1(float x, float y, int id) {
	switch (id)
	{
	case 1:
		return (1 - x + 4*y);
	case 2:
		return (1 - y/x);
	case 3:
		return (x - y + 2);
	case 4:
		return (-10 * y); 
	case 5:
		return (0.04 * y);
	default:
		printf("Funcao invalida");
		exit(1);
	}
}
*/

void metodoEuler(float x0, float y0,float h,int m,float vx[],float vy[]){
    int j;
    float x[m+1];
    float y[m+1];
    x[0] = x0;
    y[0] = y0;
    // Calculo pelo metodo de Euler
    for(j = 0; j < m; j++) {
        y[j+1] = y[j] + h*fGet(x[j], y[j]);
        x[j+1] = x[j] + h;
    }
    // mostrando o resultado
    printf("Os valores de x e y sao: \n");
    for(j = 0; j <= m; j++) {
        vx[j] = x[j];
        vy[j] = y[j];
        printf("%.4f, %.4f\n", x[j], y[j]);
    }
}


void rungeKuttaQuartaOrdem(float x0,float y0,float h,int m,float vx[],float vy[]){
	int j;
	float x[m+1];
	float y[m+1];
	float k1, k2, k3, k4;

	x[0] = x0;
	y[0] = y0;

	for(j = 0; j < m; j++) {
        k1 = fGet(x[j], y[j]);
        k2 = fGet(x[j] + h / 2, y[j] + (h / 2)*k1);
        k3 = fGet(x[j] + h / 2, y[j] + (h / 2)*k2);
        k4 = fGet(x[j] + h, y[j] + h*k3);
		y[j + 1] = y[j] + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
		x[j + 1] = x[j] + h;
	}

	// Mostra os valores
	printf("Os valores de x e y sao: \n"); 
	for(j = 0; j <= m; j++) {
        vx[j] = x[j];
        vy[j] = y[j];
		printf("%f, %f \n", x[j], y[j]);
	} 

}

void rungeKuttaTerceiraOrdem(float x0,float y0,float h,int m,float vx[],float vy[]){
	float k1, k2, k3;
	int  j;

	float x[m+1], y[m+1];
	x[0] = x0;
	y[0] = y0;

	// faz os calculos 
	for(j = 0; j < m; j++) {
        k1 = fGet(x[j], y[j]);
        k2 = fGet(x[j] + h / 2, y[j] + k1 / 2);
        k3 = fGet(x[j] + ((float)3 / 4)*h, y[j] + ((float)3 / 4)*k2);
		x[j+1] = x[j] + h;
		y[j+1] = y[j] + (h/9)*(2*k1 + 3*k2 + 4*k3); 
	}

	printf("Os valores de x e y sao:\n");
	for(j = 0; j <= m; j++) {
        vx[j] = x[j];
        vy[j] = y[j];
		printf("%f, %f; \n",x[j], y[j]);
	}	
}

void rungeKuttaSegundaOrdem(float x0,float y0,float h,int m,float vx[],float vy[]){
	int j;		
	float x[m+1];
	float y[m+1];
	float k1, k2;

	x[0] = x0;
	y[0] = y0;

	//Calculo pelo metodo de Runge Kutta de segunda ordem 
	for(j = 0; j < m; j++) {
        k1 = fGet(x[j], y[j]);
        k2 = fGet(x[j] + h, y[j] + h*k1);
		y[j + 1] = y[j] + (h/2)*(k1 + k2);
		x[j + 1] = x[j] + h;
	}

	//mostra os resultados
	printf("Os valores de x e y sao: \n");
	for(j = 0; j <= m; j++) {
        vx[j] = x[j];
        vy[j] = y[j];
        printf("%.4f, %.4f \n", x[j], y[j]);
	}
}

void preditorCorretor(float x0,float y0,float h,int m,float vx[],float vy[]){
	float k1, k2, k3, k4;
	int j;
	// Calculo de x[0]->x[3] e y[0]->y[3] pelo metodo RK4
	float x[m+1];
	float y[m+1];

	x[0] = x0;
	y[0] = y0;

	// calculo de x[0] -> x[3] e y[0] -> y[3] pelo metodo de Runge Kutta 
	for(j = 0; j < 3; j++) {
		k1 = fGet(x[j], y[j]);
		k2 = fGet(x[j] + h / 2, y[j] + (h / 2)*k1);
		k3 = fGet(x[j] + h / 2, y[j] + (h / 2)*k2);
		k4 = fGet(x[j] + h, y[j] + h*k3);
		y[j + 1] = y[j] + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
		x[j + 1] = x[j] + h;
	}

	float yp, fp;

	// Calculo da EDO usando o metodo Preditor-Corretor 
	for(j = 3; j < m; j++) {
		x[j+1] = x[j] + h;
		yp = y[j] + (h/24)*(55*fGet(x[j], y[j]) - 59*fGet(x[j-1], y[j-1]) + 37*fGet(x[j-2], y[j-2]) - 9*fGet(x[j-3], y[j-3]));
		fp = y[j] + (h/24)*(9*fGet(x[j+1], yp) + 19*fGet(x[j], y[j]) - 5*fGet(x[j-1], y[j-1]) + fGet(x[j-2], y[j-2]));
		y[j+1] = y[j] + (h/24)*(9*fGet(x[j+1], fp) + 19*fGet(x[j], y[j]) - 5*fGet(x[j-1], y[j-1]) + fGet(x[j-2], y[j-2]));

	}

	// 
	printf("Os valores de x e y sao: \n");
	for(j = 0; j <= m; j++) {
		printf("%f, %f\n", x[j], y[j]);
	}
}

void plot(){
    char path[FILENAME_MAX];
    GetCurrentDir(path, sizeof(path));
    snprintf(path, sizeof path, "%s\\plota.exe",path);
    int i;
    int len = strlen(path);
    for(i = len; i >= 1; i--){
        path[i] = path[i -1];
    }
    path[0] = '\"';
    path[len+1] = '\"';
    path[len+2] = '\n';
    system(path);
}
