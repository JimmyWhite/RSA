/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

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

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(300, 389);
        Dialog->setStyleSheet(QStringLiteral("background-image: url(:/new/images/images/1.jpg);"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 90, 151, 41));
        pushButton->setStyleSheet(QLatin1String("background-color: red;\n"
"background-image: url(:/new/images/images/1.fw.png);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 22px;\n"
"    padding: 6px;\n"
"    color:red;"));
        lineEdit = new QLineEdit(Dialog);
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
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(21, 18, 261, 16));
        label->setStyleSheet(QLatin1String("font-size:18px;\n"
"color:red;"));
        lineEdit_2 = new QLineEdit(Dialog);
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

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("Dialog", "\350\277\233\350\241\214\345\212\240\345\257\206", 0));
        label->setText(QApplication::translate("Dialog", "\350\257\267\345\234\250\344\270\213\351\235\242\346\226\271\346\241\206\344\270\255\350\276\223\345\205\24516\350\277\233\345\210\266\346\230\216\346\226\207", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
