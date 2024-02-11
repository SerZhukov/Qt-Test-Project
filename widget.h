#ifndef WIDGET_H
#define WIDGET_H
#include "QApplication"
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QCloseEvent>



class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QPushButton *btnQuit;
    QPushButton *btnWindow;
    QPushButton *btnBlock;
    QPushButton *btnUnblock;
    QPushButton *btnDisconnect;
    QPushButton *btnConnect;
    QVBoxLayout *vbox;
protected:
    QLabel *label;
public  slots:
    void new_window();
    void btnBlock_clicked();
    void btnUnblock_clicked();
    void btnDisconnect_clicked();
    void btnConnect_clicked();


};

#endif // WIDGET_H
