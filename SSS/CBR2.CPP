#include<iostream.h>
#include<conio.h>
void calc(float bs,float &it,float &all)
{
 it=bs*0.1;
 all=bs*0.6;
}
void main()
{
 clrscr();
 float b,i,a;
 cout<<"Enter basic salary: ";
 cin>>b;
 calc(b,i,a);
 cout<<"Income Tax: "<<i<<endl;
 cout<<"Allowance: "<<a<<endl;
 cout<<"Salary in hand: "<<b+a-i<<endl;
 getch();
}