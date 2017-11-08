#include "Widget.h"
#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Widget w;
    w.show();
    QFile file;
    file.setFileName(":/DarkStyle.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QString(file.readAll());
    app.setStyleSheet(styleSheet);
    return app.exec();
}
