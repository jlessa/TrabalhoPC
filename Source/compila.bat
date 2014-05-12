del t1.exe
<<<<<<< HEAD

gcc -x c++ -c main.c edo.c -I ./include -I ./dependencies/include
gcc -Wall -x c++ -Wno-unused-value -std=c++98 -pedantic -g -I./include/ -c kool.c -o kool.o
g++ -o t1.exe -lmsvcrt -L./lib/ edo.o main.o kool.o -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -user32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 -lkoolplot -lbgi

=======
gcc -x c++ -mwindows -I ./include/ -I ./dependencies/include/ -o t1.exe edo.c main.c aplot.c -static -L./lib/ -llua5.1 -lkoolplot -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 -lstdc++ -lsupc++
>>>>>>> 6fdc07c338c4a40b95dc2b11c802434cddc0835c
t1.exe