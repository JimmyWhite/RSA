/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(300, 389);
        Dialog2->setStyleSheet(QStringLiteral("background-image: url(:/new/images/images/1.jpg);"));
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 301, 21));
        label->setStyleSheet(QLatin1String("font-size:18px;\n"
"color:red;"));
        lineEdit = new QLineEdit(Dialog2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 40, 301, 41));
        lineEdit->setStyleSheet(QLatin1String("background-color: red;\n"
"background-image: url(:/new/images/images/1.fw.png);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 22px;\n"
"    padding: 6px;\n"
"    color:red;"));
        lineEdit_2 = new QLineEdit(Dialog2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 340, 301, 41));
        lineEdit_2->setStyleSheet(QLatin1String("background-color: red;\n"
"background-image: url(:/new/images/images/1.fw.png);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 22px;\n"
"    padding: 6px;\n"
"    color:red;"));
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 100, 151, 41));
        pushButton->setStyleSheet(QLatin1String("background-color: red;\n"
"background-image: url(:/new/images/images/1.fw.png);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 22px;\n"
"    padding: 6px;\n"
"    color:red;"));

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", 0));
        label->setText(QApplication::translate("Dialog2", "\350\257\267\345\234\250\344\270\213\351\235\242\346\226\271\346\241\206\350\276\223\345\205\24516\350\277\233\345\210\266\347\255\276\345\220\215\345\206\205\345\256\271", 0));
        pushButton->setText(QApplication::translate("Dialog2", "\350\277\233\350\241\214\347\255\276\345\220\215", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
