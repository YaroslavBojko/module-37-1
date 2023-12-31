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

    bool valueError (double& value1, double& value2)
    {
        bool correctValue1 = true;
        bool correctValue2 = true;

        value1 = lineEdit_2->text().toDouble(&correctValue1);
        value2 = lineEdit->text().toDouble(&correctValue2);

        return (correctValue1 && correctValue2);
    }


public slots:
    void addition()
    {
        double value1 {0};
        double value2 {0};

        if(valueError(value1,value2))
            lcdNumber->display(value1 + value2);
        else
            lcdNumber->display("ERROR");
    };

    void subtraction()
    {
        double value1 {0};
        double value2 {0};

        if(valueError(value1,value2))
            lcdNumber->display(value1 - value2);
        else
            lcdNumber->display("ERROR");
    };

    void multiplication()
    {
        double value1 {0};
        double value2 {0};

        if(valueError(value1,value2))
            lcdNumber->display(value1 * value2);
        else
            lcdNumber->display("ERROR");
    };

    void division()
    {
        double value1 {0};
        double value2 {0};

        if(valueError(value1,value2))
            lcdNumber->display(value1 / value2);
        else
            lcdNumber->display("ERROR");
    };

};

#endif //MODULE_37_1_CALLMAINWINDOW_H
