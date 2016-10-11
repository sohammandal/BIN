/*
  Program No.: 8
  Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
  Date: 7-8-14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long a,b;
cout<<"Enter the number: ";
cin>>a;
cout<<"\nEnter the multiple upto which table is to be displayed: ";
cin>>b;
for(int i=1;i<=b;i++)
cout<<a<<'*'<<i<<'='<<a*i<<endl;
getch();
}