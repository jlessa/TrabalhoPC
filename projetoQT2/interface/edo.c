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

//Inicia a variável do interpretador e uma função padrão "x + y e a variável 'e'"
void luaStart(){
	L = luaL_newstate();
	luaL_openlibs(L);
    math_replacement();
    lua_pushnumber(L,2.71828182846);
    lua_setglobal(L,"e");
    lua_pcall(L, 0, 0, 0);
    fSet("sin(pi * x) + e");
}
//Desaloca a variável do interpretador
void luaEnd(){
	lua_close(L);
}

void addMathFunction(const char * funcName){
    char str[256];
    snprintf(str, sizeof str, "%s = math.%s", funcName,funcName);
    luaL_loadstring(L, str);
    lua_pcall(L, 0, 0, 0);
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
void math_replacement(){
    addMathFunction("abs");
    addMathFunction("acos");
    addMathFunction("asin");
    addMathFunction("atan");
    addMathFunction("atan2");
    addMathFunction("ceil");
    addMathFunction("cos");
    addMathFunction("cosh");
    addMathFunction("deg");
    addMathFunction("exp");
    addMathFunction("floor");
    addMathFunction("fmod");
    addMathFunction("frexp");
    addMathFunction("huge");
    addMathFunction("dlexp");
    addMathFunction("log");
    addMathFunction("log10");
    addMathFunction("max");
    addMathFunction("min");
    addMathFunction("modf");
    addMathFunction("pi");
    addMathFunction("pow");
    addMathFunction("rad");
    addMathFunction("random");
    addMathFunction("randomseed");
    addMathFunction("sin");
    addMathFunction("sinh");
    addMathFunction("sqrt");
    addMathFunction("tanh");
    addMathFunction("tan");
}

//Analiza a função da string *func e a armazena na variável do interpretador de LUA
void fSet(char * func){
    //func = math_replacement(func);
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

void preditorCorretor(float x0,float y0,float h,int m,int id, int entrada){
    /*
    float k1, k2, k3, k4;
    int j;

    float x[m+1];
    float y[m+1];

    x[0] = x0;
    y[0] = y0;

    printf("Informe o metodo que deseja usar como preditor: \n");
    printf("(1) - Metodo de Euler \n");
    printf("(2) - Runge Kutta Segunda Ordem \n");
    printf("(3) - Runge Kutta Terceira Ordem \n");
    printf("(4) - Runge Kutta Quarta Ordem \n");


    switch (entrada)
    {
    case 1:
        // calculo de x[0] -> x[3] e y[0] -> y[3] pelo metodo de Euler
        for(j = 0; j < 3; j++) {
            y[j+1] = y[j] + h*f(x[j], y[j],id);
            x[j+1] = x[j] + h;
        }break;
    case 2:
        // calculo de x[0] -> x[3] e y[0] -> y[3] pelo metodo de Runge Kutta de ordem 2
        for(j = 0; j < 3; j++) {
            k1 = f(x[j], y[j],id);
            k2 = f(x[j] + h, y[j] + h*k1,id);
            y[j + 1] = y[j] + (h/2)*(k1 + k2);
            x[j + 1] = x[j] + h;
        }break;
    case 3:
        // calculo de x[0] -> x[3] e y[0] -> y[3] pelo metodo de Runge Kutta de ordem 3
        for(j = 0; j < 3; j++) {
            k1 = f(x[j], y[j],id);
            k2 = f(x[j] + h/2, y[j] + k1/2,id);
            k3 = f(x[j] + ((float)3/4)*h, y[j] + ((float)3/4)*k2,id);
            x[j+1] = x[j] + h;
            y[j+1] = y[j] + (h/9)*(2*k1 + 3*k2 + 4*k3);
        }break;
    case 4:
        // calculo de x[0] -> x[3] e y[0] -> y[3] pelo metodo de Runge Kutta 4 ordem
        for(j = 0; j < 3; j++) {
            k1 = f(x[j], y[j],id);
            k2 = f(x[j] + h/2, y[j] + (h/2)*k1,id);
            k3 = f(x[j] + h/2, y[j] + (h/2)*k2,id);
            k4 = f(x[j] + h, y[j] + h*k3,id);
            y[j + 1] = y[j] + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
            x[j + 1] = x[j] + h;
        }break;
    default:
        break;
    }

    float yp, fp;

    // Calculo da EDO usando o metodo Preditor-Corretor
    for(j = 3; j < m; j++) {
        x[j+1] = x[j] + h;
        yp = y[j] + (h/24)*(55*f(x[j], y[j],id) - 59*f(x[j-1], y[j-1],id) + 37*f(x[j-2], y[j-2],id) - 9*f(x[j-3], y[j-3],id));
        fp = y[j] + (h/24)*(9*f(x[j+1], yp,id) + 19*f(x[j], y[j],id) - 5*f(x[j-1], y[j-1],id) + f(x[j-2], y[j-2],id));
        y[j+1] = y[j] + (h/24)*(9*f(x[j+1], fp,id) + 19*f(x[j], y[j],id) - 5*f(x[j-1], y[j-1],id) + f(x[j-2], y[j-2],id));

    }

    //
    printf("Os valores de x e y sao: \n");
    for(j = 0; j <= m; j++) {
        printf("%f, %f\n", x[j], y[j]);
    }
    */
}


// Abre um processo que usa koolplot para mostrar os graficos do arquivo pontos.txt
void plot(){
    char path[FILENAME_MAX];
    GetCurrentDir(path, sizeof(path));
    snprintf(path, sizeof path, "%s\\plot\\plota.exe",path);
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
