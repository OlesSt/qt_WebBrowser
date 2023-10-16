#ifndef WEBBROWSER_H
#define WEBBROWSER_H

#include <QMainWindow>
#include <QWebEngineView>

namespace Ui {
class WebBrowser;
}

class WebBrowser : public QMainWindow
{
    Q_OBJECT

public:
    explicit WebBrowser(QWidget *parent = nullptr);
    ~WebBrowser();

    void loadPage();

public slots:
    void pushBack();
    void pushForward();
    void pushUpdate();
    void pushFind();

private:
    Ui::WebBrowser *ui;
    QWebEngineView *webEngineView;

};

#endif // WEBBROWSER_H
