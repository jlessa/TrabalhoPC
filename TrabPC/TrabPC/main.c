#include "edo.h"

int main(void){
	lua_State * L = luaL_newstate();
	luaL_openlibs(L);
	luaopen_base(L);
	luaopen_io(L);
	luaopen_string(L);
	luaopen_math(L);
	
	if (luaL_dofile(L, "interface.wlua")){
		puts("arquivo aberto");
	}
	else{
		puts("erro");
		system("PAUSE");
		exit(1);
	}

	float x0, y0, h;
	int m,entrada;

	//entrada de dados
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
		metodoEuler(x0,y0,h,m);
	case 2:
		rungeKuttaSegundaOrdem(x0,y0,h,m);
	case 3:
		rungeKuttaTerceiraOrdem(x0,y0,h,m);	
	case 4:
		rungeKuttaQuartaOrdem(x0,y0,h,m);
	case 5:
		preditorCorretor(x0,y0,h,m);
	default:
		break;
	}

	system("PAUSE");
	lua_close(L);
}
