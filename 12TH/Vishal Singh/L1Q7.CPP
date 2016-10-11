/*
List 1 Program 7
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void Enter(char [100][100],int);
void Display(char [100][100],int);
void Sort(char [100][100],int);
void Search(char[100][100],int);
void main()
{
 clrscr();
 char A[100][100];
 int N;
 cout<<"Enter number of countries"<<endl;
 cin>>N;
 Enter(A,N);
 Sort(A,N);
 Display(A,N);
 Search(A,N);
 getch();
}
void Enter(char A[100][100],int N)
{
 cout<<"Enter name of countries"<<endl;
 for(int i=0;i<N;i++)
  gets(A[i]);
}
void Display(char A[100][100],int N)
{
 cout<<endl;
 for(int i=0;i<N;i++)
  cout<<A[i]<<endl;
 cout<<endl;
}
void Sort(char A[100][100],int N)
{
 for(int i=0;i<N-1;i++)
  for(int j=0;j<N-i-1;j++)
   if(strcmpi(A[j],A[j+1])<0)
   {
    char t[100];
    strcpy(t,A[j]);
    strcpy(A[j],A[j+1]);
    strcpy(A[j+1],t);
   }
}
void Search(char A[100][100],int N)
{
 char S[100];
 cout<<"Enter Country to be searched"<<endl;
 gets(S);
 int found=0,i=0;
 while(i<N && !found)
 {
  if(strcmpi(A[i],S)==0)
   found++;
  else
   i++;
  }
 if(found)
  cout<<"Country Registered"<<endl;
 else
  cout<<"Country not Registered"<<endl;
}

/**********OUTPUT************
Enter number of countries
6
Enter name of countries
India
Pakistan
USA
UK
Spain
Portugal

USA
UK
Spain
Portugal
Pakistan
India

Enter Country to be searched
USA
Country Registered
*/

