del t1.exe
gcc -I ./include -I ./dependencies/include -static -o t1.exe edo.c main.c -lmsvcrt -L./lib/ -llua5.1 -liup.dll -liuplua51.dll -liupluacontrols51.dll -lgdi32 -user32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32
t1.exe