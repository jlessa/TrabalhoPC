gcc.exe -Wall -x c++ -mwindows -I ./include/ -I ./dependencies/include/ -o aplot.o aplot.c -L./lib/ -lkoolplot -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 -lstdc++ -lsupc++