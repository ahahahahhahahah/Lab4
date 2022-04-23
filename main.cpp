#include "mainwindow.h"
#include "bus.h"
#include <QApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Bus sus;
    sus.n=3;
    sus.model="oka";
    sus.year=2000;
    sus.color=RED;
    sus.people=12;
    std::cout<<sus.to_string();
    return a.exec();
}
