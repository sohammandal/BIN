#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i=0,t1=0,t2=1,t3;
cout<<"How many Fibonacci Numbers do you need? ";
cin>>i;
for (int j=1;j<=i;j++)
{
t3=t1+t2;
cout<<t1<<" ";
t1=t2;
t2=t3;
}
getch();
}
