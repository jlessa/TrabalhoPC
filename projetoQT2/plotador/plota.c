#include <stdio.h>
#include <stdlib.h>

#include "koolplot.h"

int main () {
  FILE *fp;
  int m=0, i;
  float temp1, temp2;

  fp = fopen ("pontos.txt", "rt");
  if (!fp) return NULL;

// Contando pontos...
  while (!feof(fp)) {
    fscanf(fp, "%f %f", &temp1, &temp2);
    m++;
  }
  fclose (fp);
  m--;

// Agora sim, lendo pontos!
  float a[m], b[m];
  fp = fopen ("pontos.txt", "rt");
  for (i=0; i < m; i++)
    fscanf(fp, "%f %f",&a[i], &b[i]);
  fclose (fp);

  Plotdata x(0, a[m]), y = sin(x) - 0.5*x;
//Plotdata x(0, 10), y(5, 20);
//  Plotdata x(-3.0, 3.0), y = sin(x) - 0.5*x;
//  clear(x);
//  clear(y);


printf ("Pontos lidos:\n");
  for (i=0; i < m; i++) {
    printf ("%f %f\n", a[i], b[i]);
    point(x, y, a[i], b[i]);
  }

  plot(x, y);
}
