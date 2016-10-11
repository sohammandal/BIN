/*
Program No. 7
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
int LCM(int,int);
void main()
{
 clrscr();
 int a,b;
 cout<<"Enter the values:\n";
 cin>>a;
 cin>>b;
 cout<<LCM(a,b);
 getch();
}

int LCM(int a,int b)
{
 int big=(a>b)?a:b;
 while(big%a||big%b)
 big++;
 return big;
}

/*
OUTPUT:
Enter the values:
4
3
12
*/