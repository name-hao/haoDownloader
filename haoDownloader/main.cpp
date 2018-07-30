#include "stdafx.h"
#include "haoDownloader.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    haoDownloader w;
    w.show();
    return a.exec();
}
