#include<iostream.h>
#include<conio.h>
int pattern(int n)
{
for(int i=n;i>=1;i--)
{
 for (int j=1;j<=i;j++)
 cout<<j;
 cout<<endl;
}
return 0;
}
void main()
{
clrscr();
int n;
cout<<"Enter N: \n";
cin>>n;
pattern(n);
getch();
}