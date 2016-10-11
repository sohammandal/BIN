#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
double num1,num2;
double operation;
cout<<"Enter Number 1 : ";
cin>>num1;
cout<<"/nEnter Number 2 : ";
cin>>num2;
cout<<"/nEnter Operation : ";
cin>>operation;
if (operation=+)
cout<<"Sum of Numbers : "<<num1+num2;
else
if(operation=-)
cout<<"Difference of Numbers : "<<num1-num2;
else
if(operation=*)
cout<<"Product of Numbers : "<<num1*num2;
else
if(operation=/)
cout<<"Divisions of Numbers : "<<num1/num2;
getch();
}