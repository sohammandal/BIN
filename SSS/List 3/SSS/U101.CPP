/*
 List 3
 Program 1
 Developed by: Soham, Shivam, Shubham
 Date: 13/11/14
*/
#include<iostream.h>
#include<conio.h>
int isprime(int n)
{
int prime=1;
int n1=2;
while(n1<=(n/2) && prime==1)
{
if (n%n1==0)
prime=0;
else
n1++;
}
if (prime==1)
return 1;
else
return 0;
}
void main()
{
clrscr();
int num;
for (int i=1;i<=100;i++)
{
if (isprime(i))
cout<<i<<endl;
}
getch();
}
