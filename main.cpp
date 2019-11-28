#include "prototypemain.h"

#include <QApplication>
#include <QStackedWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PrototypeMain mainWindow;

    mainWindow.show();
    return a.exec();
}
