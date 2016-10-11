/*
Program No. 5
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/

#include<iostream.h>
#include<conio.h>
long Reverse(long);
void main()
{
 clrscr();
 int N,Num;
 cout<<"Enter the value of N:";
 cin>>N;
 Num=N;
 int M=Reverse(N);
 if(M==Num)
 cout<<"Palindrome";
 else
 cout<<"Not a Palindrome";
 getch();
}

long Reverse(long N)
{
 int extract,reverse=0,N1=N;
 while(N1!=0)
 {
  extract=N1%10;
  reverse=reverse*10+extract;
  N1/=10;
 }
 return reverse;
}

/*
OUTPUT:
Enter the value of N:111
Palindrome
*/
