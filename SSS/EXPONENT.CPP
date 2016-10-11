#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num=1,x,y;
cout<<"Enter exponent: ";
cin>>x;
cout<<"Enter power: ";
cin>>y;
for (int i=1;i<=y;i++)
{
num=num*x;
}
cout<<"The Result is: "<<num;
getch();
}