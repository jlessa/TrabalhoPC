del t1.exe

gcc -x c++ -c main.c edo.c -I ./include -I ./dependencies/include
gcc -Wall -x c++ -Wno-unused-value -std=c++98 -pedantic -g -I./include/ -c kool.c -o kool.o
g++ -o t1.exe -lmsvcrt -L./lib/ edo.o main.o kool.o -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -user32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 -lkoolplot -lbgi

t1.exe