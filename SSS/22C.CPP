#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int base,pow;
cout<<"base: ";
cin>>base;
cout<<"power: ";
cin>>pow;
float prod=1,fact=1,sum=0,term;
for (int i=1;i<=pow;i++)
 {
 prod=prod*base;
 fact=fact*i;
 term=prod/fact;
 sum=sum+term;
 }
 cout<<"Total: "<<sum;
 getch();
 }