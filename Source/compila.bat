del t1.exe
gcc -I ./include -I ./dependencies/include -static -o t1.exe edo.c main.c -L./lib/ -llua5.1 -lkoolplot
t1.exe