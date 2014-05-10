del t1.exe
<<<<<<< HEAD

gcc -Wall -x c++ -Wno-unused-value -std=c++98 -pedantic  -g    -I"C:\Program Files (x86)\CodeBlocks-EP\sdk\koolplot\include" -I"C:\Program Files (x86)\CodeBlocks-EP\sdk\winbgim\include" -c main.c edo.c -I ./include -I ./dependencies/include -static-libgcc -static-libstdc++
gcc -o t1.exe -L./lib/ -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32 edo.o main.o -static-libgcc -static-libstdc++

gcc -c main.c edo.c -I ./include -I ./dependencies/include
gcc -L"C:\Program Files (x86)\CodeBlocks-EP\sdk\koolplot\lib" -L"C:\Program Files (x86)\CodeBlocks-EP\sdk\winbgim\lib" -o t1.exe -lmsvcrt -L./lib/ -llua51 -liup -liuplua51 -liupluacontrols51 -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32  -lkoolplot -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 -lole32 edo.o main.o 


=======
gcc -I ./include -I ./dependencies/include -static -o t1.exe edo.c main.c -L./lib/ -llua5.1
>>>>>>> 58b95e5d7e86ababa1b576171cecc0e9b2dbb0dd
t1.exe