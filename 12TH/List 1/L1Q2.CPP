/*
List-1
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
int prime(int);
int palindrome(int);
int sumeven(int);
void main()
{
 clrscr();
 int y,n;
 do
 {
  clrscr();
  cout<<"Choose an option:\n1. Check if no. is prime\n2. Check if no. is a palindrome\n3. Check if sum of digits is even\n4. Exit\n";
  cin>>y;
  if(y==4)
  exit(1);
  cout<<"Enter a number: ";
  cin>>n;
  if(y==1)
  prime(n);
  else if(y==2)
  palindrome(n);
  else if(y==3)
  sumeven(n);
 }
 while(y!=4);
}
int prime(int n)
{
 int pr;
 while(pr==0 && n<=2)
 {
 for(int i=2;i<(n/2);i++)
 {
  if(n%i==0)
  pr=1;
  else pr=0;
 }
 }
 if(pr==1)
 {
  cout<<"It is a prime number ";
  return 1;
 }
 else
 {
   cout<<"It is not a prime number ";
   return 0;
 }
}
int palindrome(int n)
{
 int num=n;
 int ect,rev=0;
 while(num!=0)
 {
  ect=num%10;
  num/=10;
  rev=(rev*10)+ect;
 }
   if(rev==n)
   {
   cout<<"It's a Palindrome"<<endl;
   getch();
   return 1;
   }
  else
  {
   cout<<"It's not a Palindrome"<<endl;
   getch();
   return 0;
  }
}
int sumeven(int n)
{
 int num=n,sum=0;
 while(num!=0)
 {
  int ect;
  ect=num%10;
  num/=10;
  sum+=ect;
  if(sum/2==0)
  {
  cout<<"It's Even"<<endl;
  getch();
  return 1;
  }
  else
  {
   cout<<"It's not Even"<<endl;
   getch();
   return 0;
  }
 }
}
