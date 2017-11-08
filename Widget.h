#ifndef WIDGET_H
#define WIDGET_H

#include "ui_Widget.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
public slots:
    void toolButtonExitClicked();
private:
    Ui::Widget ui;
};

#endif // WIDGET_H
