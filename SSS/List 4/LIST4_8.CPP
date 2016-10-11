/*
List 4
Program 8
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void Input(int A[][100],int,int);
void SumRow(int A[][100],int,int);
void SumCol(int A[][100],int,int);
void main()
{
 clrscr();
 int A[100][100],Row,Col;
 cout<<"Enter Rows and Columns"<<endl;
 cin>>Row>>Col;
 Input(A,Row,Col);
 SumRow(A,Row,Col);
 SumCol(A,Row,Col);
 getch();
}
void Input(int A[][100],int x,int y)
{
 for(int i=0;i<x;i++)
  for(int j=0;j<y;j++)
   cin>>A[i][j];
}
void SumRow(int A[][100],int x,int y)
{
 for(int i=0;i<x;i++)
 {
  int SumR=0;
  for(int j=0;j<y;j++)
   SumR=SumR+A[i][j];
  cout<<"Sum of Row"<<i+1<<"="<<SumR<<endl;
 }
}
void SumCol(int A[][100],int x,int y)
{
 for(int j=0;j<y;j++)
 {
  int SumC=0;
  for(int i=0;i<x;i++)
   SumC=SumC+A[i][j];
  cout<<"Sum of Column"<<j+1<<"="<<SumC<<endl;
  }
}


/* OUTPUT
Enter Rows and Columns
2 3                                                                             
1 2 3                                                                           
4 5 6                                                                           
Sum of Row1=6                                                                   
Sum of Row2=15                                                                  
Sum of Column1=5                                                                
Sum of Column2=7                                                                
Sum of Column3=9
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



