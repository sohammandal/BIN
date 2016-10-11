/*
List 2 Program 3
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct ACCOUNT
{
 int Acno;
 char Name[20];
 float Balance;
};
void Enter(ACCOUNT A[100],int n);
void Display(ACCOUNT A[100],int n);
void DisplayU(ACCOUNT A[100],int n);
void main()
{
 clrscr();
 ACCOUNT A[100];
 int n,choice,exit=0;
 cout<<"Enter number of Accounts-";
 cin>>n;
 do
 {
  cout<<"Enter choice-1.Enter 2.Display 3.Display Accounts with balance greater than 1,00,000 4.Exit\n";
  cin>>choice;
  if(choice==1)
   Enter(A,n);
  else if(choice==2)
   Display(A,n);
  else if(choice==3)
   DisplayU(A,n);
  else if(choice==4)
   exit++;
 }while(!exit);
 getch();
}
void Enter(ACCOUNT A[100],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<"Enter Details\n";
  cout<<"Account number-";cin>>A[i].Acno;
  cout<<"Name-";gets(A[i].Name);
  cout<<"Balance-";cin>>A[i].Balance;
 }
}
void Display(ACCOUNT A[100],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<"Account Number-"<<A[i].Acno<<endl;
  cout<<"Name-"<<A[i].Name<<endl;
  cout<<"Balance-"<<A[i].Balance<<endl;
 }
}
void DisplayU(ACCOUNT A[100],int n)
{
 int found=0;
 for(int i=0;i<n;i++)
 {
  if(A[i].Balance>100000)
  {
   found++;
   cout<<"Account Number-"<<A[i].Acno<<endl;
   cout<<"Name-"<<A[i].Name<<endl;
   cout<<"Balance-"<<A[i].Balance<<endl;
  }
 }
 if(found==0)
  cout<<"Not found\n";
}

/*OUTPUT
Enter number of Accounts-2
Enter choice-1.Enter 2.Display 3.Display Accounts with balance greater than 1,00
,000 4.Exit
1
Enter Details
Account number-1009
Name-Apple
Balance-1000000
Enter Details
Account number-1
Name-orange
Balance-100
Enter choice-1.Enter 2.Display 3.Display Accounts with balance greater than 1,00
,000 4.Exit
3
Account Number-1009
Name-Apple
Balance-1000000
Enter choice-1.Enter 2.Display 3.Display Accounts with balance greater than 1,00
,000 4.Exit
4
*/


