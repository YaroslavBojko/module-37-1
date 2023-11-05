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

    bool valueError (int& value1, int& value2)
    {
        bool correctValue1 = true;
        bool correctValue2 = true;

        value1 = lineEdit_2->text().toInt(&correctValue1);
        value2 = lineEdit->text().toInt(&correctValue2);

        return (correctValue1 && correctValue2);
    }


public slots:
    void addition()
    {
        int value1 {0};
        int value2 {0};

        if(valueError(value1,value2))
            lcdNumber->display(value1 + value2);
        else
            lcdNumber->display("ERROR");
    };

    void subtraction()
    {
        int value1 {0};
        int value2 {0};

        if(valueError(value1,value2))
            lcdNumber->display(value1 - value2);
        else
            lcdNumber->display("ERROR");
    };

    void multiplication()
    {
        int value1 {0};
        int value2 {0};

        if(valueError(value1,value2))
            lcdNumber->display(value1 * value2);
        else
            lcdNumber->display("ERROR");
    };

    void division()
    {
        int value1 {0};
        int value2 {0};

        if(valueError(value1,value2))
            lcdNumber->display(value1 / value2);
        else
            lcdNumber->display("ERROR");
    };

};

#endif //MODULE_37_1_CALLMAINWINDOW_H
