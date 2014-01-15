#include <QtGui/QApplication>
#include "gensrcwnd.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GenSrcWnd w;
    w.show();
    
    return a.exec();
}
