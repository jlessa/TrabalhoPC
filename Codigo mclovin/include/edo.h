#ifndef EDO_H
#define EDO_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void metodoEuler(float x0, float y0,float h,int m,int id);
float f(float x, float y,int id);
void fSet(char * func);
float fGet(float x, float y);
void preditorCorretor(float x0,float y0,float h,int m,int id);
void rungeKuttaQuartaOrdem(float x0,float y0,float h,int m,int id);
void rungeKuttaSegundaOrdem(float x0,float y0,float h,int m,int id);
void rungeKuttaTerceiraOrdem(float x0,float y0,float h,int m,int id);

#endif // EDO_H
