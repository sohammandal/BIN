/*
List 1 Program 1
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
int Prime(int P);
int Palindrome(int PD);
int Sum(int S);

void main()
{
  clrscr();

  int a,exit=0;
  char sel;

  do
  {
   cout<<endl;
   cout<<"Enter choice: a) Prime b) Palindrome c) Sum of Digits d) exit \n";
   cin>>sel;
   if(sel=='a')
   {
       cout<<"Enter a number \n";
   cin>>a;
    if(Prime(a))
    cout<<"Prime number \n";
    else
    cout<<"Not Prime";
   }
   else if(sel=='b')
   {
       cout<<"Enter a number \n";
   cin>>a;
    if(Palindrome(a))
    cout<<"Palindrome \n";
    else
    cout<<"Not Palindrome \n";
   }
   else if(sel=='c')
   {
       cout<<"Enter a number \n";
   cin>>a;
    cout<<"Sum of Digits is "<<Sum(a)<<endl;
   }
   else if(sel=='d')
    exit=1;
   else
    cout<<"Command not recognized \n";
  }while(!exit);
 getch();
}
int Prime(int P)
{
 int Pr=1;
 int i=2;
 while(i<=(P/2) && Pr)
 {
  if(P%i==0)
   Pr=0;
  else
   i++;
 }
 if(Pr)
  return 1;
 else
  return 0;
}
int Palindrome(int PD)
{
 int a=0,ap=PD;
 while(ap>0)
 {
  int k=ap%10;
  a=(10*a)+k;
  ap=ap/10;
 }
 if(PD==a)
  return 1;
 else
  return 0;
}
int Sum(int S)
{
 int Sum=0;
 while(S>0)
 {
  int k=S%10;
  Sum=Sum+k;
  S=S/10;
  }
  return Sum;
}

/*OUTPUT
Enter choice: a) Prime b) Palindrome c) Sum of Digits d) exit
a
Enter a number
5
Prime number

Enter choice: a) Prime b) Palindrome c) Sum of Digits d) exit
b
Enter a number
343
Palindrome

Enter choice: a) Prime b) Palindrome c) Sum of Digits d) exit
b
Enter a number
69
Not Palindrome

Enter choice: a) Prime b) Palindrome c) Sum of Digits d) exit
c
Enter a number
1234
Sum of Digits is 10

Enter choice: a) Prime b) Palindrome c) Sum of Digits d) exit
d
*/