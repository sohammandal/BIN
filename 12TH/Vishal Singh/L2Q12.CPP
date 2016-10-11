/*
List 2 Program 5
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
struct DATE
{
 int Day,Month,Year;
};
struct STUDENT
{
 int Admno;
 char Sname[20];
 DATE DOB;
};
void Enter(STUDENT A[100],int n);
void Display(STUDENT A);
void DisplayD(STUDENT A[100],int n);
void main()
{
 clrscr();
 STUDENT A[100];
 int a,n,choice,exit=0;
 cout<<"Enter number of students-";
 cin>>n;
 do
 {
  cout<<"\nEnter choice-1.Enter 2.Display 3.Students on 1/1/90,2/2/90 or 3/3/90 4.Exit\n";
  cin>>choice;
  if(choice==1)
  {
   Enter(A,n);
  }
  else if(choice==2)
  {
   cout<<"Enter student number-"; cin>>a;
   Display(A[a-1]);
  }
  else if(choice==3)
  {
   DisplayD(A,n);
  }
  else
  exit++;
 }while(!exit);
 getch();
}
void Enter(STUDENT A[100],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<"Enter Details:\n";
  cout<<"Admno-";cin>>A[i].Admno;
  cout<<"Name-";gets(A[i].Sname);
  cout<<"Date(DD MM YYYY)-";cin>>A[i].DOB.Day>>A[i].DOB.Month>>A[i].DOB.Year;
 }
}
void Display(STUDENT A)
{
 cout<<"Admno-";cout<<A.Admno<<endl;
 cout<<"Name-";cout<<A.Sname<<endl;
 cout<<"Date-";cout<<A.DOB.Day<<"/"<<A.DOB.Month<<"/"<<A.DOB.Year<<endl;
}
void DisplayD(STUDENT A[100],int n)
{
 int found=0;
 for(int i=0;i<n;i++)
 {
  if(((A[i].DOB.Day==1 && A[i].DOB.Month==1) && A[i].DOB.Year==1990) || ((A[i].DOB.Day==2 && A[i].DOB.Month==2) && A[i].DOB.Year==1990) || ((A[i].DOB.Day==3 && A[i].DOB.Month==3) && A[i].DOB.Year==1990))
  {
   Display(A[i]);
   found++;
  }
 }
 if(found==0)
  cout<<"No student found";
}

/*OUTPUT
Enter number of students-2

Enter choice-1.Enter 2.Display 3.Students on 1/1/90,2/2/90 or 3/3/90 4.Exit
1
Enter Details:
Admno-711
Name-Soham
Date(DD MM YYYY)-4 11 1997
Enter Details:
Admno-155
Name-Greg
Date(DD MM YYYY)-1 1 1990

Enter choice-1.Enter 2.Display 3.Students on 1/1/90,2/2/90 or 3/3/90 4.Exit
3
Admno-155
Name-Greg
Date-1/1/1990

Enter choice-1.Enter 2.Display 3.Students on 1/1/90,2/2/90 or 3/3/90 4.Exit
4
*/