#include <QtWidgets>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // Create a window for the application
    QWidget* window = new QWidget();
    window->setMinimumWidth(360);

    // Create a numeric display widget and add it to a grid
    QGridLayout* grid = new QGridLayout();

    QLCDNumber* screen = new QLCDNumber();
    screen->setMinimumHeight(80);
    grid->addWidget(screen, 0, 0, 1, 3);

    // Create numeric keys and add them to grid

    int keyInfo[][3] = {
        // key number, row, column
        {0, 4, 0},
        {1, 3, 0},
        {2, 3, 1},
        {3, 3, 2},
        {4, 2, 0},
        {5, 2, 1},
        {6, 2, 2},
        {7, 1, 0},
        {8, 1, 1},
        {9, 1, 2}
    };

    QString keyText;
    QPushButton* btn;
    for (int i = 0; i <= 9; i++) {
        keyText = QString::number(keyInfo[i][0]);
        btn = new QPushButton(keyText);

        grid->addWidget(btn, keyInfo[i][1], keyInfo[i][2]);
    }

    // Create Enter key aand add it to grid
    QPushButton* enter = new QPushButton("Enter");
    grid->addWidget(enter, 4, 1, 1, 2);


    // Set window's layout to be the grid and make it visible
    window->setLayout(grid);
    window->show();

    return app.exec();
}