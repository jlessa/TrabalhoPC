del t1.exe
gcc -c main.c edo.c -I ./include -I ./dependencies/include -static-libgcc -static-libstdc++
gcc -o t1.exe -L./lib/ -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 edo.o main.o -static-libgcc -static-libstdc++
del main.o
del edo.o
t1.exe