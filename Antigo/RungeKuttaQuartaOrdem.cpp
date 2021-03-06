#include <stdio.h>
#include <math.h>

float f(float x, float y) {
	return x - y;
}

int main(void) {
	
	float x0, y0, h;
	int m, j;
	
	// Entrada de dados 
	printf("Digite o valor de x inicial: \n");
	scanf("%f", &x0);
	printf("Digite o valor de y inicial: \n");
	scanf("%f", &y0);
	printf("Digite o valor de espacamento h: \n");
	scanf("%f", &h);
	printf("Digite o numero de interacoes m: \n");
	scanf("%d", &m);
	
	float x[m + 1], y[m + 1], k1, k2, k3, k4;
	
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
	
	return 0;
}
