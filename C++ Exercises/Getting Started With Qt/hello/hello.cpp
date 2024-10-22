#include <QtWidgets>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QLabel* widget = new QLabel("<h1>Hello World!</h1>");

    QFont font("Times", 14, QFont::Bold);
    widget->setFont(font);
    widget->setStyleSheet("color: red");
    widget->setAlignment(Qt::AlignCenter);

    widget->setMinimumSize(360, 120);


    widget->show();

    return app.exec();
}