#include <stdio.h>
#include <stdlib.h>
#include "edo.h"


int callback(lua_State *L){
	printf("%d\n",lua_tointeger(L,1) );
}

int main(int argc, char *argv[]){
	luaStart();
	// testeKoolplot();
	// luaEnd();

	//IupOpen(&argc, &argv);

	//L = luaL_newstate();
	//luaL_openlibs(L);
	//lua_register(L,"callback",callback);
	//luaopen_base(L);
	//luaopen_io(L);
	//luaopen_string(L);
	//luaopen_math(L);

	//iuplua_open(L);
	
	//luaL_dofile(L, "interface.wlua");
	
	// IupClose();
	
	float x0, y0, h;
	int m,entrada,id;

	
	// escolha da funcao
	printf("Digite a funcao que deseja usar: (ex: x + 2 * y)\n");
	// printf("(1) - (1 - x + 4*y) \n");
	// printf("(2) - (1 - y/x) \n");
	// printf("(3) - (x - y + 2) \n");
	// printf("(4) - (-10 * y) \n");
	// printf("(5) - (0.04 * y) \n");
	// scanf("%d", &id);	
	char funcao[80];
	gets(funcao);
	fSet(funcao);
	
	// entrada de dados
	printf("Digite o valor de x inicial: \n");
	scanf("%f", &x0);
	printf("Digite o valor de y inicial: \n");
	scanf("%f", &y0);
	printf("Digite o valor do espacamento h: \n");
	scanf("%f", &h);
	printf("Informe o numero de subintervalos : \n");
	scanf("%d", &m);

	printf("Informe o metodo que deseja usar: \n");
	printf("(1) - Metodo de Euler \n");
	printf("(2) - Runge Kutta Segunda Ordem \n");
	printf("(3) - Runge Kutta Terceira Ordem \n");
	printf("(4) - Runge Kutta Quarta Ordem \n");
	printf("(5) - Preditor Corretor \n");
	scanf("%d", &entrada);

	switch (entrada)
	{
	case 1:
		metodoEuler(x0,y0,h,m,id);
		break;
	case 2:
		rungeKuttaSegundaOrdem(x0,y0,h,m,id);
		break;
	case 3:
		rungeKuttaTerceiraOrdem(x0,y0,h,m,id);	
		break;
	case 4:
		rungeKuttaQuartaOrdem(x0,y0,h,m,id);
		break;
	case 5:
		preditorCorretor(x0,y0,h,m,id);
		break;
	default:
		break;
	}
	//lua_close(L);
	system("PAUSE");
	
	return 0;
}
