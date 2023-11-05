#include <QApplication>
#include <QPushButton>
#include "callmainwindow.h"
#include "./ui_calculator.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CallMainWindow window(nullptr);
    Ui::MainWindow calculator;
    calculator.setupUi(&window);
    window.lineEdit_2 = calculator.lineEdit_2;
    window.lineEdit = calculator.lineEdit;
    window.lcdNumber = calculator.lcdNumber;
    window.resize(600, 500);
    window.show();
    return QApplication::exec();
}
