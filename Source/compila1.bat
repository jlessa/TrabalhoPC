del t1.exe main.o edo.o

gcc -Wall -x c++ -Wno-unused-value -std=c++98 -pedantic -g -I./include -c main.c edo.c
g++ -o t1.exe -L./lib/ main.o -llua5.1 edo.o -lkoolplot -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

t1.exe