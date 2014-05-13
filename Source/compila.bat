del t1.exe main.o edo.o kool.o

gcc -x c++ -c main.c edo.c -I./include
gcc -Wall -x c++ -Wno-unused-value -std=c++98 -pedantic -g -I./include -c kool.c -o kool.o
g++ -o t1.exe -L./lib/ main.o edo.o kool.o -lkoolplot -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

t1.exe