/*
List 4
Program 9
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void Input(int A[][5],int);
void Diagonal(int A[][5],int);
void Display(int A[][5],int);
void main()
{
 clrscr();
 int A[5][5],n;
 cout<<"Enter side"<<endl;
 cin>>n;
 Input(A,n);
 Diagonal(A,n);
 Display(A,n);
 getch();
}
void Input(int A[][5],int x)
{
 for(int i=0;i<x;i++)
  for(int j=0;j<x;j++)
   cin>>A[i][j];
}
void Diagonal(int A[][5],int x)
{
 int Sum1=0;
 int Sum2=0;
 for(int i=0;i<x;i++)
 {
  for(int j=0;j<x;j++)
  {
   if(i==j)
    Sum1=Sum1+A[i][j];
   if(j==(x-i-1))
    Sum2=Sum2+A[i][j];
  }
 }
 cout<<"Sum of 1st Diag="<<Sum1<<endl;
 cout<<"Sum of 2nd Diag="<<Sum2<<endl;
}
void Display(int A[][5],int x)
{
 for(int i=0;i<x;i++)
 {
  for(int j=0;j<x;j++)
   cout<<A[i][j]<<" ";
  cout<<endl;
 }
}


/* OUTPUT
Enter side
3                                                                               
1 2 3 4 5 6 7 8 9                                                               
Sum of 1st Diag=15                                                              
Sum of 2nd Diag=15                                                              
1 2 3                                                                           
4 5 6                                                                           
7 8 9                                                                           
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
