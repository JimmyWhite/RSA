#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTime"
#include "qdebug.h"
#include "qstring.h"
#include "qmath.h"
#include "qfile.h"
#include "dialog.h"
#include "qfileinfo.h"
#include "dialog2.h"
int a[35],b[35];

QString pp,qq,nn,ee,dd;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->hide();
    ui->pushButton->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
    setFixedSize(800,500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString BigMultiply(QString s1,QString s2)
{
    QString s;
    int i,j,k;
    int a[20][30];
    int b[30];
    int t;
    if ((s1=="0")|| (s2=="0"))
        return "0";
    for (i=0;i<30;i++)
        b[i]=0;
    for (i=0;i<20;i++)
        for (j=0;j<30;j++)
            a[i][j]=0;
    for (i=s2.length()-1;i>=0;i--)
    {
        k=0;
        for (j=s1.length()-1;j>=0;j--)
        {
            a[s2.length()-1-i][s1.length()-1-j+s2.length()-1-i]=((s2[i].toLatin1()-48)*(s1[j].toLatin1()-48)+k)%10;
            k=((s2[i].toLatin1()-48)*(s1[j].toLatin1()-48)+k)/10;
        }
        if (k!=0)
        {
            a[s2.length()-1-i][s1.length()+s2.length()-1-i]=k;
        }
    }
     k=0;
    for (i=0;i<30;i++)
    {
        b[i]=b[i]+k;
        for(j=0;j<s2.length();j++)
        {
            b[i]=b[i]+a[j][i];
        }
         k=b[i];
         b[i]=b[i]%10;
         k=k/10;
     }

    i=29;
    while (b[i]==0)
    {
        i--;
    }
    for (j=i;j>=0;j--)
    s=s+QString::number(b[j]);
   return s;
}
long long  BigMod(QString x,long long y)
{
    long long z;
    int i;
    z=0;
    for (i=0;i<x.length();i++)
    {
        z=(z*10+x[i].toLatin1()-48);
        z=z%y;
    }
    return z;
}
QString BigDiv(QString x,long long y)
{
    QString  s;
    long long z;
    int i;
    z=0;
    bool flag;
    flag=false;
    for (i=0;i<x.length();i++)
    {
        z=(z*10+x[i].toLatin1()-48);
        if ((z>=y)or(flag==true))
        {
             s=s+QString::number(z/y);
             z=z%y;
             flag=true;
        }

    }
    return s;


}

long long BCD(int a[])
{
    long long x=0;
    long long k;
    int i,j;
    for (i=0;i<=34;i++)
    {
        k=1;
        for (j=1;j<=i;j++)
        {
            k=k*2;
        }
        x=x+k*a[i];
    }
    return x;
}
bool BigGCD(QString x,long long k)
{
    long long  pp,kk,rr;
    rr=1;
    pp=k;
    kk=BigMod(x,k);
    while (rr>0)
    {
        rr=pp%kk;
        pp=kk;
        kk=rr;

    }
    if (pp==1) return true;
    else
        return false;
}
bool GCD(long long p,int k)
{
     long long  pp,kk,rr;
    rr=1;
    pp=p;kk=k;
    while (rr>0)
    {
        rr=pp%kk;
        pp=kk;
        kk=rr;
    }
    if (pp==1) return true;
    else
        return false;
}
QString  BiggerMod(QString x,QString y)
{
    long long z;
    int i;
    z=0;
    for (i=0;i<x.length();i++)
    {
        z=(z*10+x[i].toLatin1()-48);
        z=z%(y.toLongLong());
    }
    return QString::number(z);
}
QString BigPlus(QString x,QString y)
{
   QString s;
   int i=0;
   int a,b,c;
   bool flag;
   int len;
   int len1,len2;
   len1=x.length();
   len2=y.length();
   if (x.length()>y.length()) len=x.length();
   else  len=y.length();
   if (x.length()<len)
   {
       for (i=1;i<=len-len1;i++)
       x='0'+x;
   }
   if (y.length()<len)
   {
       for (i=1;i<=len-len2;i++)
       y='0'+y;
   }
   flag=false;
   for (i=len-1;i>=0;i--)
   {
       a=x[i].toLatin1()-48;
       b=y[i].toLatin1()-48;
       c=a+b;
       if (flag) c=c+1;
       if (c>9)
       {
           c=c%10;
           flag=true;
       }

       else
       {
           flag=false;
       }
       s=QString::number(c)+s;

   }
   if(flag)s='1'+s;
   return s;
}
QString BigSub(QString x,QString y)
{
    QString s;
    int i,j;
    int a,b,c;
    bool flag=false;
    if ((x[0]!='-')&&(y[0]!='-'))
    {
        if (x.length()>y.length())
        {
            for (i=y.length()-1;i>=0;i--)
              {
                a=x[i+x.length()-y.length()].toLatin1()-48;
                b=y[i].toLatin1()-48;
                if (flag) a=a-1;
                if (a<b)
                {
                    a=a+10;
                    flag=true;
                }
                else
                {
                    flag=false;
                }
                c=a-b;
                s=QString::number(c)+s;
              }
            for (i=x.length()-y.length()-1;i>=0;i--)
            {

                    a=x[i].toLatin1()-48;
                    if (flag)
                    {
                        a=a-1;
                    }
                    if (a<0)
                    {
                        a=a+10;
                        flag=true;
                    }
                    else
                    {
                        flag=false;
                    }
                    s=QString::number(a)+s;
            }

            i=0;
            while (s[i]=='0')
            {
                i++;
            }



            return (s.mid(i));
        }
        if (x.length()<y.length())
        {
            QString temp;
            temp=x;
            x=y;
            y=temp;
            for (i=y.length()-1;i>=0;i--)
              {
                a=x[i+x.length()-y.length()].toLatin1()-48;
                b=y[i].toLatin1()-48;
                if (flag) a=a-1;
                if (a<b)
                {
                    a=a+10;
                    flag=true;
                }
                else
                {
                    flag=false;
                }
                c=a-b;
                s=QString::number(c)+s;
              }
            for (i=x.length()-y.length()-1;i>=0;i--)
            {

                    a=x[i].toLatin1()-48;
                    if (flag)
                    {
                        a=a-1;
                    }
                    if (a<0)
                    {
                        a=a+10;
                        flag=true;
                    }
                    else
                    {
                        flag=false;
                    }
                    s=QString::number(a)+s;
            }

            i=0;
            while (s[i]=='0')
            {
                i++;
            }
           return('-'+s.mid(i));
        }
        if (x.length()==y.length())
        {
            bool biaoji;
            biaoji=false;
            for (i=0;i<x.length();i++)
            {
                if (x[i]>y[i])
                break;
                if (x[i]<y[i])
                {
                    biaoji=true;
                    break;
                }
            }
            if (biaoji==false)
            {
                for (i=y.length()-1;i>=0;i--)
                  {
                    a=x[i+x.length()-y.length()].toLatin1()-48;
                    b=y[i].toLatin1()-48;
                    if (flag) a=a-1;
                    if (a<b)
                    {
                        a=a+10;
                        flag=true;
                    }
                    else
                    {
                        flag=false;
                    }
                    c=a-b;
                    s=QString::number(c)+s;
                  }
                i=0;
                while (s[i]=='0')
                {
                    i++;
                }

               return(s.mid(i));

            }
            else
            {
                QString temp;
                temp=x;
                x=y;
                y=temp;
                for (i=y.length()-1;i>=0;i--)
                  {
                    a=x[i+x.length()-y.length()].toLatin1()-48;
                    b=y[i].toLatin1()-48;
                    if (flag) a=a-1;
                    if (a<b)
                    {
                        a=a+10;
                        flag=true;
                    }
                    else
                    {
                        flag=false;
                    }
                    c=a-b;
                    s=QString::number(c)+s;
                  }
                i=0;
                while (s[i]=='0')
                {
                    i++;
                }
               return('-'+s.mid(i));
            }

        }
    }
    if ((x[0]!='-')&&(y[0]=='-'))
    {
        return (BigPlus(x,y.mid(1)));

    }
    if ((x[0]=='-')&&(y[0]!='-'))
    {
        return '-'+BigPlus(x.mid(1),y);

    }
    if ((x[0]=='-')&&(y[0]=='-'))
    {
       return  BigSub(y.mid(1),x.mid(1));
    }


}
QString BiggerMultiply(QString s1, QString s2)
{
    QString s;
    int i,j,k;
    int a[100][100];
    int b[100];
    int t;
    if ((s1=="0")or (s2=="0"))
        return "0";
    if (s2[0]=='-')
    {
        for (i=0;i<s2.length()-1;i++)
            s2[i]=s2[i+1];
        s2 = s2.left(s2.length() - 1);
        for (i=0;i<100;i++)
            b[i]=0;
        for (i=0;i<100;i++)
            for (j=0;j<100;j++)
                a[i][j]=0;
        for (i=s2.length()-1;i>=0;i--)
        {
            k=0;
            for (j=s1.length()-1;j>=0;j--)
            {
                a[s2.length()-1-i][s1.length()-1-j+s2.length()-1-i]=((s2[i].toLatin1()-48)*(s1[j].toLatin1()-48)+k)%10;
                k=((s2[i].toLatin1()-48)*(s1[j].toLatin1()-48)+k)/10;
            }
            if (k!=0)
            {
                a[s2.length()-1-i][s1.length()+s2.length()-1-i]=k;
            }
        }
         k=0;
        for (i=0;i<100;i++)
        {
            b[i]=b[i]+k;
            for(j=0;j<s2.length();j++)
            {
                b[i]=b[i]+a[j][i];
            }
             k=b[i];
             b[i]=b[i]%10;
             k=k/10;
         }

        i=99;
        while (b[i]==0)
        {
            i--;
        }
        for (j=i;j>=0;j--)
        s=s+QString::number(b[j]);

        s='-'+s;
       return s;

    }
    else
    {
        for (i=0;i<100;i++)
            b[i]=0;
        for (i=0;i<100;i++)
            for (j=0;j<100;j++)
                a[i][j]=0;
        for (i=s2.length()-1;i>=0;i--)
        {
            k=0;
            for (j=s1.length()-1;j>=0;j--)
            {
                a[s2.length()-1-i][s1.length()-1-j+s2.length()-1-i]=((s2[i].toLatin1()-48)*(s1[j].toLatin1()-48)+k)%10;
                k=((s2[i].toLatin1()-48)*(s1[j].toLatin1()-48)+k)/10;
            }
            if (k!=0)
            {
                a[s2.length()-1-i][s1.length()+s2.length()-1-i]=k;
            }
        }
         k=0;
        for (i=0;i<100;i++)
        {
            b[i]=b[i]+k;
            for(j=0;j<s2.length();j++)
            {
                b[i]=b[i]+a[j][i];
            }
             k=b[i];
             b[i]=b[i]%10;
             k=k/10;
         }

        i=99;
        while (b[i]==0)
        {
            i--;
        }
        for (j=i;j>=0;j--)
        s=s+QString::number(b[j]);
       return s;

    }

}
QString DCH(QString x)
{
    QString s;
   long long  temp;
    while (x[0]!=0)
    {
        temp=BigMod(x,16);

        if (temp==10) s='A'+s;

        if (temp==11) s='B'+s;

        if (temp==12) s='C'+s;

        if (temp==13) s='D'+s;

        if (temp==14) s='E'+s;

        if (temp==15) s='F'+s;

        if (temp<10) s=QString::number(temp)+s;

        x=BigDiv(x,16);
    }
    return s;

}
void ExtendedEuclid(QString a,QString b,QString &x,QString &y)
{
   if (b=="0")
   {
       x="1";y="0";
       return;
   }
   ExtendedEuclid(b,QString::number(BigMod(a,b.toLongLong())),x,y);
   QString t=x;
   x=y;
   y=BigSub(t,  BiggerMultiply( BigDiv(a,b.toLongLong()),y));
}

void MainWindow::on_pushButton_clicked()
{
    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);
    int i,j;
    int a[35]; int b[35];
    int k;
    int cishu;
    int t;
    long long p,q;
    long long aa,bb;
    bool biaoji,flag;
    long long e,d;
    QString x,y;
    int sum;
    QString s1,s2,s3;
    QString n,m;
    a[0]=1;a[34]=1;
    for (i=1;i<=33;i++)
    {
        a[i]=qrand()%2;
    }
    b[0]=1;b[34]=1;
    for (i=1;i<=33;i++)
    {
        b[i]=qrand()%2;
    }
    p=BCD(a);
    q=BCD(b);
      flag=false;
      while (flag==false)
    {
        sum=0;
       for (cishu=1;cishu<=20;cishu++)
 {


                   biaoji=false;
    while (biaoji==false)
    {
        k=qrand()%1000000+2000000;

        biaoji=GCD(p,k);
    }
    aa=1;bb=k;
   for (i=0;i<=34;i++)
   {

       if (i==0)
       {
           s1=QString::number(bb);
           s2=QString::number(bb);
           s3=BigMultiply(s1,s2);
           bb=BigMod(s3,p);
       }
       else
       {
           if (a[i]==0)
           {
               s1=QString::number(bb);
               s2=QString::number(bb);
               s3=BigMultiply(s1,s2);
               bb=BigMod(s3,p);
           }
           else
           {
               s1=QString::number(aa);
               s2=QString::number(bb);
               s3=BigMultiply(s1,s2);
               aa=BigMod(s3,p);

               s1=QString::number(bb);
               s2=QString::number(bb);
               s3=BigMultiply(s1,s2);
               bb=BigMod(s3,p);
           }

       }

   }
   if (aa==1) sum++;
    for (j=2;j<1000;j++)
        if (p%j==0)
        {
            sum-=1;
            break;
        }
  }
    if (sum==20) flag=true;
    else
    {
        p+=2;
        t=1;
        for (j=1;j<=33;j++)
        {
            if (t==1)
            {
                if (a[j]==1)
                {
                    a[j]=0;
                    t=1;
                }
                else
                {
                    a[j]=1;
                    t=0;
                }

            }

        }
    }
 }
      flag=false;
      while (flag==false)
    {
        sum=0;
       for (cishu=1;cishu<=20;cishu++)
 {


                   biaoji=false;
    while (biaoji==false)
    {
        k=qrand()%1000000+2000000;

        biaoji=GCD(q,k);
    }
    aa=1;bb=k;
   for (i=0;i<=34;i++)
   {

       if (i==0)
       {
           s1=QString::number(bb);
           s2=QString::number(bb);
           s3=BigMultiply(s1,s2);

           bb=BigMod(s3,q);
       }
       else
       {
           if (b[i]==0)
           {
               s1=QString::number(bb);
               s2=QString::number(bb);
               s3=BigMultiply(s1,s2);
               bb=BigMod(s3,q);
           }
           else
           {
               s1=QString::number(aa);
               s2=QString::number(bb);
               s3=BigMultiply(s1,s2);
               aa=BigMod(s3,q);

               s1=QString::number(bb);
               s2=QString::number(bb);
               s3=BigMultiply(s1,s2);
               bb=BigMod(s3,q);
           }

       }

   }
   if (aa==1) sum++;
    for (j=2;j<1000;j++)
        if (q%j==0)
        {
            sum-=1;
            break;
        }
  }
    if (sum==20) flag=true;
    else
    {
        q+=2;
        t=1;
        for (j=1;j<=33;j++)
        {
            if (t==1)
            {
                if (b[j]==1)
                {
                    b[j]=0;
                    t=1;
                }
                else
                {
                    b[j]=1;
                    t=0;
                }

            }

        }
    }
 }
      bool flag1;
      s1=QString::number(p);
      s2=QString::number(q);
      n=BigMultiply(s1,s2);
      s1=QString::number(p-1);
      s2=QString::number(q-1);
      m=BigMultiply(s1,s2);
      flag1=false;
      while (flag1==false)
      {
          e=qrand()%1000000000+50000000;
          flag1=BigGCD(m,e);
      }

     ExtendedEuclid(m,QString::number(e),x,y);
     if (y[0]=='-')
     {
         y=BigSub(m,y.mid(1));
         x=BigSub(x,QString::number(e));
     }
     pp=DCH(QString::number(p));
     qq=DCH(QString::number(q));
     nn=DCH(n);
     ee=DCH(QString::number(e));
     dd=DCH(y);


     QFile file("p.txt");
     if (file.open(QFile::WriteOnly | QIODevice::Truncate))
{    QTextStream out(&file);
    out<<pp;
}
     file.close();
     QFile file2("q.txt");
     if (file2.open(QFile::WriteOnly | QIODevice::Truncate))
{    QTextStream out(&file2);
    out<<qq;
}
     file2.close();
     QFile file3("n.txt");
     if (file3.open(QFile::WriteOnly | QIODevice::Truncate))
{    QTextStream out(&file3);
    out<<nn;
}
     file3.close();
     QFile file4("e.txt");
     if (file4.open(QFile::WriteOnly | QIODevice::Truncate))
{    QTextStream out(&file4);
    out<<ee;
}
     file4.close();
     QFile file5("d.txt");
     if (file5.open(QFile::WriteOnly | QIODevice::Truncate))
{    QTextStream out(&file5);
    out<<dd;
}
     file5.close();
     ui->label->show();






}

void MainWindow::on_pushButton_2_clicked()
{
    Dialog d;
    d.setWindowTitle("RSA---数据加密");
    d.exec();

}

void MainWindow::on_pushButton_3_clicked()
{
    Dialog2 d2;
    d2.setWindowTitle("RSA---数字签名");

    d2.exec();
}
