#include "aplot.h"

void testeKoolplot()
{
   Plotdata x(-3.0, 3.0), y = sin(x) - 0.5*x;
   plot(x, y);
} 