#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int power=1,x,n,sum=0;
cin>>x>>n;
for (int i=1;i<=n;i++)
{
for (int j=1;j<=i;j++)
power=x*power;
sum+=power;
power=1;
}
cout<<sum;
getch();
}