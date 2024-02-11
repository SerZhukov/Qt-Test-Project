#ifndef NEW_WINDOW_H
#define NEW_WINDOW_H
#include "widget.h"


class New_Window : public Widget
{
    Q_OBJECT
public:
    New_Window(QWidget *parent = nullptr) : Widget(parent)
    {

    }
    ~New_Window()
    {

    }

public:
    void closeEvent(QCloseEvent* event) override
    {
        Widget::label->setText("new Hello World");
        //Widget::closeEvent(event);
    }

};
#endif // NEW_WINDOW_H
