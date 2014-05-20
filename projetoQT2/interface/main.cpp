#include "interface.h"
#include <QApplication>
#ifdef __cplusplus
    extern "C"
    {
#endif
#include "edo.h"
#ifdef __cplusplus
    }
#endif

int main(int argc, char *argv[])
{
    luaStart();
    QApplication a(argc, argv);
    Interface w;
    w.show();
    return a.exec();
}
