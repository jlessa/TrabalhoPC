#include <stdio.h>
#include <math.h>

float dy(float x, float y);

int main() {
	
	float x0, y0, h;
	int j, m;
	
	//entrada de dados
	printf("Digite o valor de x inicial: \n");
	scanf("%f", &x0);
	printf("Digite o valor de y inicial: \n");
	scanf("%f", &y0);
	printf("Digite o valor do espacamente h: \n");
	scanf("%f", &h);
	printf("Informe o numero de subintervalos : \n");
	scanf("%d", &m);
	
	float x[m+1], y[m+1];
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
	
	return 0;
}

// aqui fica a função
float dy(float x, float y) {
	return x - y;
}
