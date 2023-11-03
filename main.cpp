#include <QApplication>
#include <QPushButton>
#include "./ui_calculator.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QMainWindow window(nullptr);
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.resize(600, 500);
    window.show();
    return QApplication::exec();
}
