/*
Program No. 4
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
long Power(int,int);
void main()
{
 clrscr();
 int x,y,N;
 long SUM=0;
 cout<<"enter the value of x:";
 cin>>x;
 cout<<"enter the value of N:";
 cin>>N;
 for(int i=1;i<=N;i++)
 {
 int R=Power(x,i);
 SUM+=R;
 }
 cout<<SUM;
 getch();
}

long Power(int x,int y)
{
 int term=1;
 for(int i=1;i<=y;i++)
 {
  term*=x;
 }
  return term;
}

/*
OUTPUT:
enter the value of x:2
enter the value of N:4
30
*/





