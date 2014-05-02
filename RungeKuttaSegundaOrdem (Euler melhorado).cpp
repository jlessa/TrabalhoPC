#include <stdio.h>

float f(float x, float y) {
	return x - y;
}

int main() {
	
	float x0, y0, h;
	int m, j;
	
	// Entrada de dados
	printf("Digite o valor do x inicial: \n");
	scanf("%f", &x0);
	printf("Digite o valor do y inicial: \n");
	scanf("%f", &y0);
	printf("Digite o valor de espacamento h: \n");
	scanf("%f", &h);
	printf("Digite a quantidade de interacoes m: \n");
	scanf("%d", &m);
	
	float x[m+1], y[m+1], k1, k2;
	
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
	
	return 0;
}

