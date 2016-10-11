#include<iostream.h>
#include<conio.h>
void change(int a,int &b)
{
 a+=b;
 b+=a;
 cout<<a<<"&"<<b<<endl;
}
void main()
{
 clrscr();
 int p=100,q=200;
 change(p,q);
 cout<<p<<"#"<<q<<endl;
 change(500,p);
 cout<<p<<"#"<<q<<endl;
 change(p+q,p);
 cout<<p<<"#"<<q<<endl;
 getch();
}