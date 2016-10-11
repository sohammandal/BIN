/*
Program No. 8
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
int HCF(int,int);
void main()
{
 clrscr();
 int a,b;
 cout<<"Enter the values:\n";
 cin>>a;
 cin>>b;
 cout<<HCF(a,b);
 getch();
}

int HCF(int a,int b)
{
 int small=(a<b)?a:b;
 while((a%small)||(b%small))
 small--;
 return small;
}

/*
OUTPUT:
Enter the values:
6
3
3
*/