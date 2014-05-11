del t1.exe
<<<<<<< HEAD

gcc -c main.c edo.c -I ./include -I ./dependencies/include
gcc -o t1.exe -lmsvcrt -L./lib/ -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -user32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 edo.o main.o 

del main.o
del edo.o
=======
gcc -I ./include -I ./dependencies/include -static -o t1.exe edo.c main.c -L./lib/ -llua5.1 -lkoolplot
>>>>>>> e56cd15ed6b161cc88726e968ef9f701e72e180b
t1.exe