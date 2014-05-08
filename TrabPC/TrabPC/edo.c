#include "edo.h"

float dy(float x, float y) {
	return x - y;
};

void metodoEuler(float x0, float y0,int h,int m){
	int j;		
	float * x = malloc(sizeof(float) * (m+1));
	float * y = malloc(sizeof(float)* (m + 1));
	x[0] = x0;
	y[0] = y0;	
	// Calculo pelo metodo de Euler
	for(j = 0; j < m; j++) {
		y[j+1] = y[j] + h*dy(x[j], y[j]);
		x[j+1] = x[j] + h;
	}	
	// mostrando o resultado
	printf("Os valores de x e y sao: \n");
	for(j = 0; j <= m; j++) {
		printf("%.4f, %.4f\n", x[j], y[j]);
	}		
};

float f(float x, float y) {
	return (-y*y);
};

void preditorCorretor(float x0,float y0,int h,int m){
	float k1, k2, k3, k4;
	int j;
	// Calculo de x[0]->x[3] e y[0]->y[3] pelo metodo RK4
	float * x = malloc(sizeof(float)* (m + 1));
	float * y = malloc(sizeof(float)* (m + 1));
	
	x[0] = x0;
	y[0] = y0;
	
	// calculo de x[0] -> x[3] e y[0] -> y[3] pelo metodo de Runge Kutta 
	for(j = 0; j < 3; j++) {
		k1 = f(x[j], y[j]);
		k2 = f(x[j] + h/2, y[j] + (h/2)*k1);
		k3 = f(x[j] + h/2, y[j] + (h/2)*k2);
		k4 = f(x[j] + h, y[j] + h*k3);
		y[j + 1] = y[j] + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
		x[j + 1] = x[j] + h;
	}
	
	float yp, fp;
	
	// Calculo da EDO usando o metodo Preditor-Corretor 
	for(j = 3; j < m; j++) {
		x[j+1] = x[j] + h;
		yp = y[j] + (h/24)*(55*f(x[j], y[j]) - 59*f(x[j-1], y[j-1]) + 37*f(x[j-2], y[j-2]) - 9*f(x[j-3], y[j-3]));
		fp = y[j] + (h/24)*(9*f(x[j+1], yp) + 19*f(x[j], y[j]) - 5*f(x[j-1], y[j-1]) + f(x[j-2], y[j-2]));
		y[j+1] = y[j] + (h/24)*(9*f(x[j+1], fp) + 19*f(x[j], y[j]) - 5*f(x[j-1], y[j-1]) + f(x[j-2], y[j-2]));
		
	}
	
	// 
	printf("Os valores de x e y sao: \n");
	for(j = 0; j <= m; j++) {
		printf("%f, %f\n", x[j], y[j]);
	}
};

void rungeKuttaQuartaOrdem(float x0,float y0,int h,int m){	
	int j;
	float * x = malloc(sizeof(float)* (m + 1));
	float * y = malloc(sizeof(float)* (m + 1));;
	float k1, k2, k3, k4;
	
	x[0] = x0;
	y[0] = y0;
	
	for(j = 0; j < m; j++) {
		k1 = f(x[j], y[j]);
		k2 = f(x[j] + h/2, y[j] + (h/2)*k1);
		k3 = f(x[j] + h/2, y[j] + (h/2)*k2);
		k4 = f(x[j] + h, y[j] + h*k3);
		y[j + 1] = y[j] + (h/6)*(k1 + 2*k2 + 2*k3 + k4);
		x[j + 1] = x[j] + h;
	}
	
	// Mostra os valores
	printf("Os valores de x e y sao: \n"); 
	for(j = 0; j <= m; j++) {
		printf("%f, %f \n", x[j], y[j]);
	} 
	
}

void rungeKuttaSegundaOrdem(float x0,float y0,int h,int m){
	int j;		
	float * x = malloc(sizeof(float)* (m + 1));
	float * y = malloc(sizeof(float)* (m + 1));
	float k1, k2;
	
	x[0] = x0;
	y[0] = y0;
	
	//Calculo pelo metodo de Runge Kutta de segunda ordem 
	for(j = 0; j < m; j++) {
		k1 = f(x[j], y[j]);
		k2 = f(x[j] + h, y[j] + h*k1);
		y[j + 1] = y[j] + (h/2)*(k1 + k2);
		x[j + 1] = x[j] + h;
	}
	
	//mostra os resultados
	printf("Os valores de x e y sao: \n");
	for(j = 0; j <= m; j++) {
		printf("%.4f, %.4f \n", x[j], y[j]);
	}
}