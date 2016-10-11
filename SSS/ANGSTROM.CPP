#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
unsigned int num;
cout<<"Enter a number ";
cin>>num;
float sum=0;
int k=num;
while (k>0)
{
int dig=k%10;
k=k/10;
float cube=dig*dig*dig;
sum=sum+cube;
}
if (sum==num)
cout<<"Angstrom Number";
else
cout<<"Vishal you suck..";
getch();
}