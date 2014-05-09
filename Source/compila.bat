del t1.exe
gcc -c main.c edo.c -I ./include -I ./dependencies/include
gcc -o t1.exe -L./lib/ -llua52 edo.o main.o 
del main.o
del edo.o
t1.exe

REM -L"C:\Program Files (x86)\Lua\5.1\clibs" -liup -lgdi32 -lcomdlg32 -lcomctl32 -luuid -loleaut32 -lole32