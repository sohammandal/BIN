/*
List 2 Program 1
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
struct BOOK
{
 int Bno;
 char Bname[20],Author[20];
 float Price;
};
void Enter(BOOK A[100],int n);
void Display(BOOK A[100],int n);
void Search(BOOK A[100],int n,int x);
void SearchN(BOOK A[100],int n,char N[20]);
void main()
{
 clrscr();
 BOOK A[100];
 int n,ch,x,exit=0;
 char Name[20];
 cout<<"Enter number of books"<<endl;
 cin>>n;
 do
 {
  cout<<"Enter your choice- 1.Enter 2.Display 3.Search by number 4.Search by name 5.Exit"<<endl;
  cin>>ch;
  if(ch==1)
   Enter(A,n);
  else if(ch==2)
   Display(A,n);
  else if(ch==3)
  {
   cout<<"Enter number to search\n";
   cin>>x;
   Search(A,n,x);
  }
  else if(ch==4)
  {
   cout<<"Enter name to be searched\n";
   gets(Name);
   SearchN(A,n,Name);
  }
  else
   exit++;
 }while(!exit);
 getch();
}
void Enter(BOOK A[100],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<"Fill the Details \n";
  cout<<"Book Number-"; cin>>A[i].Bno;
  cout<<"Book Name-"; gets(A[i].Bname);
  cout<<"Author-"; gets(A[i].Author);
  cout<<"Price-"; cin>>A[i].Price;
 }
}
void Display(BOOK A[100],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<"Book Number-"; cout<<A[i].Bno<<endl;
  cout<<"Book Name-"; cout<<A[i].Bname<<endl;
  cout<<"Author-"; cout<<A[i].Author<<endl;
  cout<<"Price-"; cout<<A[i].Price<<endl;
 }
}
void Search(BOOK A[100],int n,int x)
{
 int found=0,i=0;
 while(!found && i<n)
 {
  if(A[i].Bno==x)
   found++;
  i++;
 }
 if(found)
 {
  cout<<"Book Number-"<<A[i-1].Bno<<endl;
  cout<<"Book Name-"<<A[i-1].Bname<<endl;
  cout<<"Author-"<<A[i-1].Author<<endl;
  cout<<"Price-"<<A[i-1].Price<<endl;
 }
 else
  cout<<"NOT FOUND \n";
}
void SearchN(BOOK A[100],int n,char N[20])
{
int found=0,i=0;
 while(!found && i<n)
 {
  if(strcmpi(A[i].Bname,N)==0)
   found++;
  i++;
 }
 if(found)
 {
  cout<<"Book Number-"<<A[i-1].Bno<<endl;
  cout<<"Book Name-"<<A[i-1].Bname<<endl;
  cout<<"Author-"<<A[i-1].Author<<endl;
  cout<<"Price-"<<A[i-1].Price<<endl;
 }
 else
  cout<<"NOT FOUND \n";
}

/********OUTPUT****************
Enter number of books
2
Enter your choice- 1.Enter 2.Display 3.Search by number 4.Search by name 5.Exit
1
Fill the Details
Book Number-111
Book Name-people
Author-we
Price-1000
Fill the Details
Book Number-100
Book Name-nothing
Author-snoop lion
Price-9
Enter your choice- 1.Enter 2.Display 3.Search by number 4.Search by name 5.Exit
3
Enter number to search
111
Book Number-111
Book Name-people
Author-we
Price-1000
Enter your choice- 1.Enter 2.Display 3.Search by number 4.Search by name 5.Exit
5
*/