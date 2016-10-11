/*
Program No. 1
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/

#include<iostream.h>
#include<conio.h>
int Isprime(int N)
{
 int i=2,prime=1;
 while((i<=N/2)&&(prime==1))
 {
  if(N%i==0)
  prime=0;
  i++;
 }
return prime;
}
void main()
{
 clrscr();
 cout<<"PRIME NUMBERS B/W 1 AND 100:\n";
 for(int i=1;i<=100;i++)
 {
 int P=Isprime(i);
 if(P)
 cout<<i<<" ";
 }
 getch();
}


/*
OUTPUT:
PRIME NUMBERS B/W 1 AND 100:
1 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/