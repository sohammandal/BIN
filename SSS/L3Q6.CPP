#include<iostream.h>
#include<conio.h>
int sum(int n)
{
 int extract=0,sum=0;
 int num=n;
 while(num!=0)
 {
 extract=num%10;
 sum+=extract;
 num/=10;
 }
 return sum;
}
void main()
{
clrscr();
int n1,n2,n3;
cout<<"Enter 3 integers: \n";
cin>>n1>>n2>>n3;
cout<<"The sums of digits of "<<n1<<" , "<<n2<<" & "<<n3<<" are:\n"<<sum(n1)<<endl<<sum(n2)<<endl<<sum(n3);
getch();
}