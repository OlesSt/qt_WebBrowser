#include <QApplication>
#include "webbrowser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WebBrowser browser;
    browser.show();

    return a.exec();
}
