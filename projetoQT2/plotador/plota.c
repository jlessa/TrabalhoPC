#include <stdio.h>
#include <stdlib.h>
#include "koolplot.h"

#define OFFSET 0.1

int main () {
  FILE *fp;
  int m=0, i;
  double temp1, temp2;

  fp = fopen ("pontos.txt", "rt");
  if (!fp) return NULL;

// Contando pontos...
  while (!feof(fp)) {
    fscanf(fp, "%lf %lf", &temp1, &temp2);
    m++;
  }
  fclose (fp);
  m--;

// Agora sim, lendo pontos!
  double a[m], b[m], xMin, xMax, yMin, yMax;
  fp = fopen ("pontos.txt", "rt");
  for (i=0; i < m; i++)
    fscanf(fp, "%lf %lf",&a[i], &b[i]);
  fclose (fp);

  Plotdata x, y;
  point(x, y, a[0], b[0]);
  xMin = xMax = a[0];
  yMin = yMax = b[0];

  //printf ("Pontos lidos:\n");
  for (i = 1; i < m; i++) {
    //printf ("%lf %lf\n", a[i], b[i]);
    point(x, y, a[i], b[i]);
	if(xMin > a[i]){
		xMin = a[i];
	}
	if(xMax < a[i]){
		xMax = a[i];
	}
	if(yMin > b[i]){
		yMin = b[i];
	}
	if(yMax < b[i]){
		yMax = b[i];
	}
  }
  axesBotLeft(x, y,xMin - OFFSET * (xMax - xMin), yMin - OFFSET * (yMax - yMin));
  axesTopRight(x, y, xMax + OFFSET * (xMax - xMin), yMax + OFFSET * (yMax - yMin));
  plot(x, y);
}

