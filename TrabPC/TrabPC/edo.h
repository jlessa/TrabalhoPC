#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "string.h"

float dy(float x, float y);
void metodoEuler(float x0, float y0,int h,int m);
float f(float x, float y);
void preditorCorretor(float x0,float y0,int h,int m);
void rungeKuttaQuartaOrdem(float x0,float y0,int h,int m);
void rungeKuttaSegundaOrdem(float x0,float y0,int h,int m);