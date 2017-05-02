#include "dialog.h"
#include "ui_dialog.h"
#include "qdebug.h"
#include "mainwindow.h"
QString B[150];
extern QString nn;
extern QString ee;
extern QString dd;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->lineEdit_2->hide();
    ui->pushButton->setCursor(QCursor(Qt::PointingHandCursor));
    setFixedSize(300,389);
}
Dialog::~Dialog()
{
    delete ui;
}


QString NewBiggerMultiply(QString s1, QString s2)
{
    QString s;
    int i,j,k;
    int a[100][100];
    int b[100];

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
QString NewBiggerPlus(QString x,QString y)
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
QString HCD(QString m)
{
    QString s;
    int i;
    for (i=0;i<m.length();i++)
    {
        if (m[i]=='A')
        {
            s=s+"1010";
        }
        if (m[i]=='a')
        {
            s=s+"1010";
        }
        if (m[i]=='b')
        {
            s=s+"1011";
        }
        if (m[i]=='c')
        {
            s=s+"1100";
        }
        if (m[i]=='d')
        {
            s=s+"1101";
        }
        if (m[i]=='e')
        {
            s=s+"1110";
        }
        if (m[i]=='f')
        {
            s=s+"1111";
        }
        if (m[i]=='B')
        {
            s=s+"1011";
        }
        if (m[i]=='C')
        {
            s=s+"1100";
        }
        if (m[i]=='D')
        {
            s=s+"1101";
        }
        if (m[i]=='E')
        {
            s=s+"1110";
        }
        if (m[i]=='F')
        {
            s=s+"1111";
        }
        if (m[i]=='0')
        {
            s=s+"0000";
        }
        if (m[i]=='1')
        {
            s=s+"0001";
        }
        if (m[i]=='2')
        {
            s=s+"0010";
        }
        if (m[i]=='3')
        {
            s=s+"0011";
        }
        if (m[i]=='4')
        {
            s=s+"0100";
        }
        if (m[i]=='5')
        {
            s=s+"0101";
        }
        if (m[i]=='6')
        {
            s=s+"0110";
        }if (m[i]=='7')
        {
            s=s+"0111";
        }
        if (m[i]=='8')
        {
            s=s+"1000";
        }
        if (m[i]=='9')
        {
            s=s+"1001";
        }

    }
    i=0;
        while (s[i]=='0')
        {
            i++;
        }
       s=s.mid(i);
       QString ss;
       ss='0';
       int j=0;
    for (i=s.length()-1;i>=0;i--)
    {
        if (s[i]=='1')
        {
       ss=NewBiggerPlus(ss,B[j]);
        }
               j++;
    }
    return ss;
}
QString  NewBiggerMod(QString x,QString y)
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
QString NewBiggerSub(QString x,QString y)
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

}
QString NewBiggerDiv(QString x,long long y)
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
QString NewBiggestMod(QString x,QString y)
{
    QString l;
    QString r;
    l="1";
    r=y;
    QString k;
    QString s;
    QString ss;
    bool flag;
    flag=false;
    if  (x.length()<y.length())
    {
        return x;
    }
    if (x.length()==y.length())
    {
        if (x<y)
            return x;
        if (x>y)
        {
            return (NewBiggerSub(x,y));
        }
    }
    while (flag==false)
    {
        //qDebug()<<l<<' '<<r;
        //qDebug()<<s;
        if (l.length()==r.length())
        {
            if (l>=r)
            {
            s=NewBiggerMultiply(y,l);
                        flag=true;
            break;
            }
        }

        k=NewBiggerDiv( NewBiggerPlus(l,r),2);
             s=NewBiggerMultiply(y,k);

        if (s.length()>x.length())
        {
            r=NewBiggerSub(k,"1");
        }
        if (s.length()<x.length())

        {
            l=NewBiggerPlus(k,"1");

        }
        if (s.length()==x.length())
        {
            if (s<x)
            {
                l=NewBiggerPlus(k,"1");
            }
            if (s>x)
            {
                r=NewBiggerSub(k,"1");
            }
        }

    }
    if (x>s)
    {

     ss=NewBiggerSub(x,s);
    }
    else
    {
    ss=NewBiggerSub(NewBiggerPlus(x,y),s);

    }
    return ss;
}

QString DCB(QString s)
{
    QString x;
    while (s!="")
     {x=NewBiggerMod(s,"2")+x;
     s=NewBiggerDiv(s,2);
       }
     return x;

}
QString  Encrypt(QString mc,QString ed)
{
    int i;
    QString s;
    s=DCB(ed);
    QString aa;
    QString bb;
    QString s1;
    QString s2;
    aa="1";bb=mc;
    for (i=s.length()-1;i>=0;i--)
    {
        if (s[i]=='1')
        {
           // qDebug()<<aa<<' '<<bb;
            s1=NewBiggerMultiply(aa,bb);
          //  qDebug()<<s1;
            aa=NewBiggestMod(s1,HCD(nn));
            s2=NewBiggerMultiply(bb,bb);
            bb=NewBiggestMod(s2,HCD(nn));

        }
        else
        {
            s2=NewBiggerMultiply(bb,bb);

            bb=NewBiggestMod(s2,HCD(nn));
        }
        }
      return (aa);
}
long long  NewBigMod(QString x,long long y)
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
QString NewBigDiv(QString x,long long y)
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
QString NewDCH(QString x)
{
    QString s;
   long long  temp;
    while (x[0]!=0)
    {
        temp=NewBigMod(x,16);

        if (temp==10) s='A'+s;

        if (temp==11) s='B'+s;

        if (temp==12) s='C'+s;

        if (temp==13) s='D'+s;

        if (temp==14) s='E'+s;

        if (temp==15) s='F'+s;

        if (temp<10) s=QString::number(temp)+s;

        x=NewBigDiv(x,16);
    }
    return s;

}
void Dialog::on_pushButton_clicked()
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
    cc=Encrypt(mm,HCD(ee));
    ui->lineEdit_2->setText(NewDCH(cc));
    ui->lineEdit_2->show();
}
