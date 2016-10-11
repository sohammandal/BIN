/*
 Program No.: 16
 Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
 Date: 29/8/14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 long num=1;
 int x,y;
 cout<<"Enter the number: ";
 cin>>x;
 cout<<"Enter the power of the number: ";
 cin>>y;
 for(int i=1;i<=y;i++)
  num=num*x;
 cout<<"The "<<y<<"th power of "<<x<<" is: "<<num;
 getch();
 }
/*
*************OUTPUT******
Enter the number: 2
Enter the power of the number: 7
The 7th power of 2 is: 128
*/