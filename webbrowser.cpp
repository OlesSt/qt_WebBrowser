#include "webbrowser.h"
#include "ui_webbrowser.h"

WebBrowser::WebBrowser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WebBrowser)
{
    ui->setupUi(this);
}

WebBrowser::~WebBrowser()
{
    delete ui;
}
