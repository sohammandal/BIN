#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num, prime=1, i=2;
cout<<"Enter the number: ";
cin>>num;
while (i<=(num/2) && prime==1)
{
if ((num%i)==0)
prime=0;
i++;
}
if (prime==1)
cout<<"It is Prime.";
else
cout<<"It is Composite.";
getch();
}




