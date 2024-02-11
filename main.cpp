#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Widget window;
    window.setWindowTitle("Test window");
    window.resize(350, 70);
    window.show();

    return app.exec();
}
