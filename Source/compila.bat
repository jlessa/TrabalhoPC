del t1.exe
gcc -c main.c edo.c -I ./include -I ./dependencies/include
gcc -o t1.exe -L./lib/ -llua52  edo.o main.o 
del main.o
del edo.o
t1.exe