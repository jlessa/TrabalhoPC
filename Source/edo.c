#include "edo.h"

void metodoEuler(float x0, float y0,float h,int m,int id){
	int j;		
	float x[m+1];
	float y[m+1];
	x[0] = x0;
	y[0] = y0;	
	// Calculo pelo metodo de Euler
	for(j = 0; j < m; j++) {
		y[j+1] = y[j] + h*f(x[j], y[j],id);
		x[j+1] = x[j] + h;
	}	
	// mostrando o resultado
	printf("Os valores de x e y sao: \n");
	for(j = 0; j <= m; j++) {
		printf("%.4f, %.4f\n", x[j], y[j]);
	}		
};

float f(float x, float y, int id) {
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
};		

void rungeKuttaQuartaOrdem(float x0,float y0,float h,int m,int id){	
	int j;
	float x[m+1];
	float y[m+1];
	float k1, k2, k3, k4;

	x[0] = x0;
	y[0] = y0;

	for(j = 0; j < m; j++) {
		k1 = f(x[j], y[j],id);
		k2 = f(x[j] + h/2, y[j] + (h/2)*k1,id);
		k3 = f(x[j] + h/2, y[j] + (h/2)*k2,id);
		k4 = f(x[j] + h, y[j] + h*k3,id);
		y[j + 1] = y[j] + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
		x[j + 1] = x[j] + h;
	}

	// Mostra os valores
	printf("Os valores de x e y sao: \n"); 
	for(j = 0; j <= m; j++) {
		printf("%f, %f \n", x[j], y[j]);
	} 

};

void rungeKuttaTerceiraOrdem(float x0,float y0,float h,int m,int id){	
	float k1, k2, k3;
	int  j;

	float x[m+1], y[m+1];
	x[0] = x0;
	y[0] = y0;

	// faz os calculos 
	for(j = 0; j < m; j++) {
		k1 = f(x[j], y[j],id);
		k2 = f(x[j] + h/2, y[j] + k1/2,id);
		k3 = f(x[j] + ((float)3/4)*h, y[j] + ((float)3/4)*k2,id);
		x[j+1] = x[j] + h;
		y[j+1] = y[j] + (h/9)*(2*k1 + 3*k2 + 4*k3); 
	}

	printf("Os valores de x e y sao:\n");
	for(j = 0; j <= m; j++) {
		printf("%f, %f; \n",x[j], y[j]);
	}	
};

void rungeKuttaSegundaOrdem(float x0,float y0,float h,int m,int id){
	int j;		
	float x[m+1];
	float y[m+1];
	float k1, k2;

	x[0] = x0;
	y[0] = y0;

	//Calculo pelo metodo de Runge Kutta de segunda ordem 
	for(j = 0; j < m; j++) {
		k1 = f(x[j], y[j],id);
		k2 = f(x[j] + h, y[j] + h*k1,id);
		y[j + 1] = y[j] + (h/2)*(k1 + k2);
		x[j + 1] = x[j] + h;
	}

	//mostra os resultados
	printf("Os valores de x e y sao: \n");
	for(j = 0; j <= m; j++) {
		printf("%.4f, %.4f \n", x[j], y[j]);
	}
};

void preditorCorretor(float x0,float y0,float h,int m,int id){
	float k1, k2, k3, k4;
	int j;
	// Calculo de x[0]->x[3] e y[0]->y[3] pelo metodo RK4
	float x[m+1];
	float y[m+1];

	x[0] = x0;
	y[0] = y0;

	// calculo de x[0] -> x[3] e y[0] -> y[3] pelo metodo de Runge Kutta 
	for(j = 0; j < 3; j++) {
		k1 = f(x[j], y[j],id);
		k2 = f(x[j] + h/2, y[j] + (h/2)*k1,id);
		k3 = f(x[j] + h/2, y[j] + (h/2)*k2,id);
		k4 = f(x[j] + h, y[j] + h*k3,id);
		y[j + 1] = y[j] + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
		x[j + 1] = x[j] + h;
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
};
