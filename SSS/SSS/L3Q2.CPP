// DONE BRILLIANTLY
#include<iostream.h>
#include<conio.h>
int div2(int n)
{
if (n%2==0)
return 1;
else
return 0;
}
int div3(int n)
{
if (n%3==0)
return 1;
else
return 0;
}
void main()
{
int n;
clrscr();
cout<<"Enter number: ";
cin>>n;
if (div2(n) && div3(n))
cout<<"The number is divisible by 6!";
else
cout<<"Not divisible:(((";
getch();
}
