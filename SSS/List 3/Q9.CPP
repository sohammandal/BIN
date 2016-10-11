/*
Program No. 9
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
void pattern(int);
void pattern1(int);
void pattern2(int);
void main()
{
 clrscr();
 int n;
 cout<<"enter the value of n:";
 cin>>n;
 pattern(n);
 pattern1(n);
 pattern2(n);
 cout<<endl;
 getch();
}

void pattern(int n)
{
 for (int i=0;i<n;i++)
 {
  for(int j=1;j<=n-i;j++)
  cout<<j;
  cout<<endl;
 }
}

void pattern1(int n)
{
 for(int i=1;i<=n;i++)
 {
  for(int j=1;j<=n-i;j++)
  cout<<" ";
  for(int k=1;k<=i;k++)
  cout<<k;
  cout<<endl;
 }
 cout<<endl;
}

void pattern2(int n)
{
 for(int i=1;i<=n;i++)
 {
  for(int j=i;j<=n;j++)
  cout<<i;
  cout<<endl;
 }
}

/*
OUTPUT:
enter the value of n:6
123456
12345
1234
123
12
1
     1
    12
   123
  1234
 12345
123456

111111
22222
3333
444
55
6
*/