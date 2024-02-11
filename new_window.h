#ifndef NEW_WINDOW_H
#define NEW_WINDOW_H
#include <QWidget>
#include <QLabel>


class New_Window : public QWidget
{
    Q_OBJECT
public:
    New_Window( QLabel* label = nullptr, QWidget *parent = nullptr) : QWidget(parent), label_(label)
    {

    }
    ~New_Window()
    {

    }
private:

    QLabel* label_;

protected:
    void closeEvent(QCloseEvent* event) override
    {
        label_->setText("Test");
        QWidget::closeEvent(event);
    }

};
#endif // NEW_WINDOW_H
