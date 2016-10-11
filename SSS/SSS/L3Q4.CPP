//DONE BRILLIANTLY
#include<iostream.h>
#include<conio.h>
long power(int x,int y)
{
 long term=1;
 for(int i=1;i<=y;i++)
 term*=x;
 return term;
}
void main()
{
int t,n,sum=0;
clrscr();
cout<<"Enter T: ";
cin>>t;
cout<<"Enter N: ";
cin>>n;
for( int j=1;j<=n;j++)
sum+=power(t,j);
cout<<sum;
getch();
}

