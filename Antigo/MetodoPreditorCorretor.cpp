#include <stdio.h>

float f(float x, float y) {
	return (-y*y);
}

// o Metodo predito corretor é o mesmo que Adams- Moulton

int main() {
	float x0, y0, h;
	float k1, k2, k3, k4;
	int m, j;

	printf("Digite o valor do x inicial: \n");
	scanf("%f",&x0);
	printf("Digite o valor do y inicial: \n");
	scanf("%f",&y0);
	printf("Digite o valor do espacamento h: \n");
	scanf("%f",&h);
	printf("Digite o numero de subintervalos m: \n");
	scanf("%d",&m);
	
	// Calculo de x[0]->x[3] e y[0]->y[3] pelo metodo RK4
	float x[m + 1], y[m + 1];
	
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
	
	return 0;
}



