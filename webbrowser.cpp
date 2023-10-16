#include "webbrowser.h"
#include "ui_webbrowser.h"

WebBrowser::WebBrowser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WebBrowser)
{
    ui->setupUi(this);
    webEngineView = new QWebEngineView();
    webEngineView->load(QUrl("https://www.google.com"));
    ui->webFrame->addWidget(webEngineView);

    connect(ui->pushBack, SIGNAL(clicked(bool)), this, SLOT(pushBack()));
    connect(ui->pushForward, SIGNAL(clicked(bool)), this, SLOT(pushForward()));
    connect(ui->pushUpdate, SIGNAL(clicked(bool)), this, SLOT(pushUpdate()));
    connect(ui->pushFind, SIGNAL(clicked(bool)), this, SLOT(pushFind()));
}

WebBrowser::~WebBrowser()
{
    delete webEngineView;
    delete ui;
}

void WebBrowser::loadPage()
{
    QString url = ui->lineEdit->text();
    if (!url.startsWith("https://") && !url.startsWith("http://"))
        url = "https://" + url;

    ui->lineEdit->setText(url);
    webEngineView->load(QUrl(url));
}

void WebBrowser::pushBack()     { webEngineView->back(); }
void WebBrowser::pushForward()  { webEngineView->forward(); }
void WebBrowser::pushUpdate()   { webEngineView->reload(); }
void WebBrowser::pushFind()     { loadPage(); }
