#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float base,pow=-1,sum=0; int n;
cout<<"Base: ";
cin>>base;
cout<<" n: ";
cin>>n;
for (int i=1;i<=n;i++)
  {
  pow=(pow*base)*-1;
  sum=sum+pow;
  }
cout<<sum;
getch();
}