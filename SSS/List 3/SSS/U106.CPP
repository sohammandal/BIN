/*
Practical List :3
Program        :6
Developed By   :Soham Mandal, Shubham Kumar, Shivam Raj
Date           :13-November-2014
*/
#include<iostream.h>
#include<conio.h>
void sum(int n)
{
int a,s=0,d;
a=n;
while(a!=0)
{
d=a%10;
s+=d;
a=a/10;
}
cout<<"Sum= "<<s<<endl;
}
void main()
{
clrscr();
int N;
cout<<"Enter Number to check:- "<<endl;
cin>>N;
sum(N);
getch();
}
/*
*******************OUTPUT************************
Enter Number to check:-
12
Sum= 3
*/