/*
Program no. 4
Developeed by- Shivam Raj ,Shubham Kumar , Soham Mandal
Date 8-8-2014
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char a;
 int b;
 int cus;
 cout<<"\nEnter the customer number : ";
 cin>>cus;
 a=65+(cus-1)/5;
 b=(cus-1)%5;
 cout<<"\nYour block and floor allocated is : "<<a<<b;
 getch();
}
/*
****** OUTPUT *******

Enter the customer number : 7

Your block and floor allocated is : B1
*/