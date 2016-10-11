/*
  Program No.: 7
  Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
  Date: 7-8-14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long sum=0;
int n,m;
cout<<"Enter first number: ";
cin>>n;
cout<<"\nEnter second number: ";
cin>>m;
for(int i=n;i<=m;i++)
if(i%2==1)
sum+=i;
cout<<"\nSum of all odd numbers between "<<n<<" and "<<m<<" is : "<<sum;
getch();
}
