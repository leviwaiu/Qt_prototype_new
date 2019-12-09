#include "prototypemain.h"

#include <QApplication>
#include <QStackedWidget>
#include <pthread.h>

void* processAnalysis(PrototypeMain *mainWindow);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PrototypeMain mainWindow;

    pthread_t extra_thread;

    mainWindow.show();
    return a.exec();
}

void* processAnalysis(PrototypeMain *mainWindow){
    int value;
    for(long int i = 0; i <= 1000000000; i++){
        value = i / 10000000;
        if(value > 10){
            mainWindow->trigger_label(2);
        }
        if(value > 30){
            mainWindow->trigger_label(3);
        }
        if(value > 80){
            mainWindow->trigger_label(4);
        }
        mainWindow->analyseProgress(value);
    }
    pthread_exit(nullptr);
}
