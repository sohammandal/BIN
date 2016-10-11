/*
Practical List :3
Program Number :3
Developed By   :Soham Mandal, Shubham Kumar, Shivam Raj
Date           :13-November-2014
*/
#include<iostream.h>
#include<conio.h>
void factorial(int n)
{int sum=0,prod=1;
for(int i=1;i<=n;i++)
{
prod*=i;
sum+=prod;
}
cout<<"Sum="<<sum;
}
void main()
{
clrscr();
int n;
cout<<"Enter Number"<<endl;
cin>>n;
factorial(n);
getch();
}
/*
************************OUTPUT***************************
Enter Number
4
Sum=33
*/