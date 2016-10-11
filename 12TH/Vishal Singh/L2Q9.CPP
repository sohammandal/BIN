/*
List 2 Program 2
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct CANDIDATE
{
  int Cno,Score;
  char Cname[20];

};
void Enter(CANDIDATE A[50],int N);
void Display(CANDIDATE A[50],int N);
void Sort(CANDIDATE A[50],int N);
void main()
{
 clrscr();
 CANDIDATE A[50];
 int N,choice,exit=0;
 cout<<"Enter No. of candidates:";
 cin>>N;
 do
 {
  cout<<"Choose one option:1.Enter the candidates 2.Sort the list 3.Display 4.Exit";
  cin>>choice;
  if(choice==1)
  {
  Enter(A,N);
  }
  else if(choice==2)
  {
   Sort(A,N);
   Display(A,N);
  }
  else if(choice==3)
  {
     Display(A,N);
  }
  else if(choice==4)
  {
     exit++;
  }
  else
   cout<<"Not Recognised";
 }while(!exit);
 getch();
}
void Enter(CANDIDATE A[50],int N)
{
 cout<<"\n Enter Candidates\n";
 for(int i=0;i<N;i++)
 {
  cout<<"Candidate Number ";
  cin>>A[i].Cno;
  cout<<"Candidate Name ";
  gets(A[i].Cname);
  cout<<"Score ";
  cin>>A[i].Score;
 }
}
void Sort(CANDIDATE A[50],int N)
{
 for(int i=0;i<N-1;i++)
  for(int j=0;j<N-i-1;j++)
   if(A[j].Score>A[j+1].Score)
   {
    CANDIDATE T=A[j];
    A[j]=A[j+1];
    A[j+1]=T;
   }
}
void Display(CANDIDATE A[50],int N)
{
 for(int i=0;i<N;i++)
 {
  cout<<"Candidate Number ";
  cout<<A[i].Cno<<endl;
  cout<<"Candidate Name ";
  puts(A[i].Cname);
  cout<<"Score ";
  cout<<A[i].Score<<endl;
 }
}

/******OUTPUT*********
Enter No. of candidates:2
Choose one option:1.Enter the candidates 2.Sort the list 3.Display 4.Exit 1

 Enter Candidates
Candidate Number 1
Candidate Name Aqw
Score 90
Candidate Number 23
Candidate Name erw
Score 89
Choose one option:1.Enter the candidates 2.Sort the list 3.Display 4.Exit2
Candidate Number 23
Candidate Name erw
Score 89
Candidate Number 1
Candidate Name Aqw
Score 90
Choose one option:1.Enter the candidates 2.Sort the list 3.Display 4.Exit4
*/