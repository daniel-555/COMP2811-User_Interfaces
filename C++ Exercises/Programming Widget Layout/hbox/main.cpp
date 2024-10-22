#include <QtWidgets>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget* window = new QWidget();
    window->setWindowTitle("QHBoxLayout Test");

    QPushButton* button1 = new QPushButton("One");
    QPushButton* button2 = new QPushButton("Two");
    QPushButton* button3 = new QPushButton("Three");

    QHBoxLayout* layout = new QHBoxLayout();
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);

    window->setLayout(layout);
    window->show();


    return app.exec();
}