#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float x,sum=0,px=1;
int n;
cout<<"x: ";cin>>x;
cout<<"n: ";cin>>n;
for (int i=1;i<=n;i++)
{
px*=x/i;
cout<<px<<" +";
sum+=px;
}
cout<<"\b= "<<sum<<endl;
getch();
}