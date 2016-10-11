#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int fact=1,num=0,sum=0;
cout<<"Enter number: ";
cin>>num;
for (int i=1;i<=num;i++)
{
 for (int j=1;j<=i;j++)
 fact=fact*j;
 sum+=fact;
 fact=1;
}
cout<<sum;
getch();
}