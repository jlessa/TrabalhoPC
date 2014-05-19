del plota.exe plota.o

gcc -Wall -x c++ -Wno-unused-value -std=c++98 -pedantic -g -I./include -c plota.c
g++ -o plota.exe -L./lib/ plota.o -lkoolplot -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

plota.exe