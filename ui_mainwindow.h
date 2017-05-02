/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/new/images/images/background.jpg);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 40, 181, 51));
        pushButton->setStyleSheet(QLatin1String("background-color: red;\n"
"background-image: url(:/new/images/images/1.fw.png);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 22px;\n"
"    padding: 6px;\n"
"    color:red;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 130, 181, 51));
        pushButton_2->setStyleSheet(QLatin1String("background-color: red;\n"
"background-image: url(:/new/images/images/1.fw.png);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 22px;\n"
"    padding: 6px;\n"
"    color:red;"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 220, 181, 51));
        pushButton_3->setStyleSheet(QLatin1String("background-color: red;\n"
"background-image: url(:/new/images/images/1.fw.png);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 22px;\n"
"    padding: 6px;\n"
"    color:red;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 440, 611, 51));
        label->setStyleSheet(QLatin1String("background-color: red;\n"
"background-image: url(:/new/images/images/1.fw.png);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 22px;\n"
"    padding: 6px;\n"
"    color:yellow;"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\345\257\206 \351\222\245 \347\224\237 \346\210\220", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\225\260 \346\215\256 \345\212\240 \345\257\206", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\346\225\260 \345\255\227 \347\255\276 \345\220\215", 0));
        label->setText(QApplication::translate("MainWindow", "p,q,n.e.d\345\267\262\347\224\237\346\210\220\345\210\260\346\226\207\344\273\266\345\244\271,\345\217\257\344\273\245\350\277\233\350\241\214\346\225\260\346\215\256\345\212\240\345\257\206\345\222\214\346\225\260\345\255\227\347\255\276\345\220\215\343\200\202", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
