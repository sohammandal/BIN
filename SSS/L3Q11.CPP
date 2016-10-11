#include<iostream.h>
#include<conio.h>
void square(int n)
{
for (int i=1;i<=n;i++)
{
for (int j=1;j<=n;j++)
cout<<"*";
cout<<"\n";
}
}
void main()
{
clrscr();
square(1);
cout<<endl;
square(3);
cout<<endl;
square(5);
getch();
}