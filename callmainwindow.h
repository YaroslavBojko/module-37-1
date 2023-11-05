//
// Created by yaros on 03.11.2023.
//

#ifndef MODULE_37_1_CALLMAINWINDOW_H
#define MODULE_37_1_CALLMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QLCDNumber>

class CallMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QLineEdit* lineEdit_2 = nullptr;
    QLineEdit* lineEdit = nullptr;
    QLCDNumber* lcdNumber = nullptr;
    CallMainWindow(QWidget* parent = nullptr) : QMainWindow(parent) {}

public slots:
    void addition()
    {
        lcdNumber->display(lineEdit_2->text().toInt() + lineEdit->text().toInt());
    };
    void subtraction(){};
    void multiplication(){};
    void division(){};

};

#endif //MODULE_37_1_CALLMAINWINDOW_H
