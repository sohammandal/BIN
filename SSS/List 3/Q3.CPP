/*
Program No. 3
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
long Factorial(int);
void main()
{
 clrscr();
 int N;
 long M;
 cout<<"Enter the value of N:";
 cin>>N;
 M=Factorial(N);
 cout<<M;
 getch();
}
long Factorial(int N)
{
 int term=1;
 long sum=0;
 for(int i=1;i<=N;i++)
 {
  term=term*i;
  sum=sum+term;
 }
  return sum;
}
/*
******OUTPUT*********
Enter the value of N:6
873
*/