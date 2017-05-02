#include "dialog2.h"
#include "ui_dialog2.h"
#include "dialog.h"
#include "qdebug.h"
#include "mainwindow.h"
extern QString NewBiggerMultiply(QString s1, QString s2);
extern QString NewBiggerPlus(QString x,QString y);
extern QString HCD(QString m);
extern QString  NewBiggerMod(QString x,QString y);
extern QString NewBiggerSub(QString x,QString y);
extern QString NewBiggerDiv(QString x,long long y);
extern  QString NewBiggestMod(QString x,QString y);
extern QString DCB(QString s);
extern QString  Encrypt(QString mc,QString ed);
extern long long  NewBigMod(QString x,long long y);
extern QString NewBigDiv(QString x,long long y);
extern QString NewDCH(QString x);
extern QString B[150];
extern QString nn,dd,ee,pp,qq;
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    ui->lineEdit_2->hide();
    ui->pushButton->setCursor(QCursor(Qt::PointingHandCursor));
    setFixedSize(300,389);

}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{
    QString m=ui->lineEdit->text();
   QString mm;
   int i;
   QString cc;
   B[0]='1';
   B[1]='2';
   for (i=2;i<150;i++)
   {
       B[i]=NewBiggerMultiply(B[i-1],"2");
   }
   mm=HCD(m);
    cc=Encrypt(mm,HCD(dd));
    ui->lineEdit_2->setText(NewDCH(cc));
    ui->lineEdit_2->show();




}
