/*
List 4
Program 10
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void Input(int A[][5],int R,int C);
void Sum2D(int A[][5],int B[][5],int X[][5],int R,int C);
void Display(int A[][5],int R,int C);
void main()
{
 clrscr();
 int A[5][5],B[5][5],X[5][5],R,C;
 cout<<"Enter Rows and Columns"<<endl;
 cin>>R>>C;
 cout<<"Enter for 1st"<<endl;
 Input(A,R,C);
 cout<<"Enter for 2nd"<<endl;
 Input(B,R,C);
 Sum2D(A,B,X,R,C);
 cout<<endl;
 Display(A,R,C);
 cout<<endl;
 Display(B,R,C);
 cout<<endl;
 Display(X,R,C);
 cout<<endl;
 getch();
}
void Input(int A[][5],int R,int C)
{
 for(int i=0;i<R;i++)
  for(int j=0;j<C;j++)
   cin>>A[i][j];
}
void Sum2D(int A[][5],int B[][5],int X[][5],int R,int C)
{
 for(int i=0;i<R;i++)
  for(int j=0;j<C;j++)
   X[i][j]=A[i][j]+B[i][j];
}
void Display(int A[][5],int R,int C)
{
 for(int i=0;i<R;i++)
 {
  for(int j=0;j<C;j++)
   cout<<A[i][j]<<" ";
  cout<<endl;
 }
}



/* OUTPUT
Enter Rows and Columns
2 3                                                                             
Enter for 1st                                                                   
1 1 1 1 1 1                                                                     
Enter for 2nd                                                                   
4 4 4 4 4 4                                                                     
                                                                                
1 1 1                                                                           
1 1 1                                                                           
                                                                                
4 4 4                                                                           
4 4 4                                                                           
                                                                                
5 5 5                                                                           
5 5 5
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
