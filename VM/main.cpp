#include "vm.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VM w;
    w.show();
    return a.exec();
}
