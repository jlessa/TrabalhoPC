del t1.exe
gcc -c main.c edo.c -I ./include -I ./dependencies/include
gcc -o t1.exe edo.o main.o -L./lib/ -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32
del main.o
del edo.o
t1.exe