del t1.exe
<<<<<<< HEAD
gcc -c main.c edo.c -I ./include -I ./dependencies/include -static-libgcc -static-libstdc++
gcc -o t1.exe -L./lib/ -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 edo.o main.o -static-libgcc -static-libstdc++
=======
gcc -c main.c edo.c -I ./include -I ./dependencies/include
gcc -o t1.exe -lmsvcrt -L./lib/ -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -user32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 edo.o main.o 
>>>>>>> 90dcdce2bbb8d66e9ad86c0820cba9c5f16173b4
del main.o
del edo.o
t1.exe