/*
List 1 Program 5
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
void Input(int [][100],int n,int m);
void Output(int [][100],int n,int m);
void Sum(int [][100],int [][100],int [][100],int n,int m);
void Diff(int [][100],int [][100],int [][100],int n,int m);
void main()
{
 clrscr();
 int A[100][100],B[100][100],C[100][100],D[100][100],n,m;
 cout<<"Enter number of rows and columns"<<endl;
 cin>>n>>m;
 Input(A,n,m);
 Input(B,n,m);
 Sum(A,B,C,n,m);
 Diff(A,B,D,n,m);
 cout<<endl;
 Output(C,n,m);
 cout<<endl;
 Output(D,n,m);
 getch();
}
void Input(int A[][100],int n,int m)
{
 cout<<"Enter numbers"<<endl;
 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
   {
    cin>>A[i][j];
   }
}
void Output(int A[][100],int n,int m)
{
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
    cout<<A[i][j]<<" ";
  cout<<endl;
 }
}
void Sum(int A[][100],int B[][100],int C[][100],int n,int m)
{
 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
   C[i][j]=A[i][j]+B[i][j];
}
void Diff(int A[][100],int B[][100],int C[][100],int n,int m)
{
 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
   C[i][j]=A[i][j]-B[i][j];
}
/******OUTPUT****************
Enter number of rows and columns
4 3
Enter numbers
1 2 3
4 5 6
7 8 9
10 11 12
Enter numbers
12 11 10
9 8 7
6 5 4
3 2 1

13 13 13
13 13 13
13 13 13
13 13 13

-11 -9 -7
-5 -3 -1
1 3 5
7 9 11
*/