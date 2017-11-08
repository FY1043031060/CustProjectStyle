#include "Widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->showFullScreen();
    connect(ui.toolButtonExit, &QToolButton::clicked, this, &Widget::toolButtonExitClicked);
}

void Widget::toolButtonExitClicked()
{
    qApp->exit();
}
