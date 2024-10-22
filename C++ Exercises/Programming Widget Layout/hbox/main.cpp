#include <QtWidgets>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget* window = new QWidget();
    window->setWindowTitle("QHBoxLayout Test");

    QLabel* label = new QLabel("&Name:");
    QLineEdit* nameField = new QLineEdit();
    label->setBuddy(nameField);


    QPushButton* searchButton = new QPushButton("Search");

    QHBoxLayout* layout = new QHBoxLayout();
    layout->addStretch();
    layout->addWidget(label);
    layout->addWidget(nameField);
    layout->addWidget(searchButton);
    layout->addStretch();


    window->setLayout(layout);
    window->show();


    return app.exec();
}