#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int sum=0,n=0;
cout<<"Enter N; ";
cin>>n;
for (int i=1;i<=n;i++)
 {
 for (int j=1;j<i*2;j+=2)
 sum+=j;
 }
cout<<sum;
getch();
}