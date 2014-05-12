del t1.exe
gcc -x c++ -mwindows -I ./include/ -I ./dependencies/include/ -o t1.exe edo.c main.c aplot.c -static -L./lib/ -llua5.1 -lkoolplot -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 -lstdc++ -lsupc++
t1.exe