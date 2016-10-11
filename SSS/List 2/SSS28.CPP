
/*
Developed by : Shivam , Shubham , Soham
Date : 18-12-14
List : 3
Program no : 22 a
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 double x,n,term=1,sum=0;
 cout<<"Enter value of N : ";
 cin>>n;
 cout<<"Enter value of X : ";
 cin>>x;
 for(int i=1;i<=n;i++)
 {
  term*=x;
  sum+=term;
 }
 cout<<"The sum of the series is : "<<sum;
 getch();
}
/*
********OUTPUT*********
Enter value of N : 9
Enter value of X : 4
The sum of the series is : 349524
*/