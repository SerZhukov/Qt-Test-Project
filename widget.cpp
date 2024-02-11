#include "widget.h"
#include "new_window.h"


Widget::Widget(QWidget* parent) : QWidget(parent)
{
    label = new QLabel("Hello, World!");
    label->setAlignment(Qt::AlignCenter);
    btnQuit = new QPushButton("&Close application");
    btnWindow = new QPushButton("&Open window");
    btnBlock = new QPushButton("&Block");
    btnUnblock = new QPushButton("&Unblock");
    btnDisconnect = new QPushButton("&Disconnect");
    btnConnect = new QPushButton("&Connect");
    vbox = new QVBoxLayout();
    vbox->addWidget(label);
    vbox->addWidget(btnQuit);
    vbox->addWidget(btnWindow);
    vbox->addWidget(btnBlock);
    vbox->addWidget(btnUnblock);
    vbox->addWidget(btnDisconnect);
    vbox->addWidget(btnConnect);
    setLayout(vbox);
    connect(btnQuit, SIGNAL(clicked()), qApp, SLOT(quit()));
    connect(btnWindow, SIGNAL(clicked()), this, SLOT(new_window()));
    connect(btnBlock, SIGNAL(clicked()), this, SLOT(btnBlock_clicked()));
    connect(btnUnblock, SIGNAL(clicked()), this, SLOT(btnUnblock_clicked()));
    connect(btnDisconnect, SIGNAL(clicked()), this, SLOT(btnDisconnect_clicked()));
    connect(btnConnect, SIGNAL(clicked()), this, SLOT(btnConnect_clicked()));
}

void Widget::new_window()
{
    New_Window* new_window = new New_Window;
    label->setText("Open new window");
    new_window->resize(100, 100);
    new_window->show();

}

void Widget::btnBlock_clicked()
{
    btnWindow->blockSignals(true);
    btnBlock->setEnabled(false);
    btnUnblock->setEnabled(true);
}

void Widget::btnUnblock_clicked()
{
    btnWindow->blockSignals(false);
    btnUnblock->setEnabled(false);
    btnBlock->setEnabled(true);

}

void Widget::btnDisconnect_clicked()
{
    disconnect(btnWindow, SIGNAL(clicked()), this, SLOT(new_window()));
    btnUnblock->setEnabled(false);
    btnBlock->setEnabled(false);
}

void Widget::btnConnect_clicked()
{
    connect(btnWindow, SIGNAL(clicked()), this, SLOT(new_window()));
    btnUnblock->setEnabled(true);
    btnBlock->setEnabled(true);
}

Widget::~Widget()
{

}


