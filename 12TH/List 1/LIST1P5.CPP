#include<iostream.h>
#include<conio.h>

void Input(int[10][10], int [10][10], int, int);
void Output(int[10][10], int[10][10], int, int);
void Sum(int[10][10], int [10][10], int[10][10], int, int);
void Diff(int [10][10], int[10][10],int [10][10], int, int);

void main()
{
clrscr();
int M,N,Ch, A[10][10], B[10][10], C[10][10]; char Ans;
do
 {
 cout<<"Enter the number of rows :";
 cin>>M;
 cout<<"Enter the number of columns :";
 cin>>N;
 do
  {
  cout<<" 1. Input the array "<<endl;
  cout<<" 2. Display the array "<<endl;
  cout<<" 3. Sum of arrays "<<endl;
  cout<<" 4. Difference of arrays "<<endl;
  cout<<" 5. Exit "<<endl;
  cout<<" Enter the choice ";cin>>Ch;
  switch(Ch)
   {
   case 1: Input(A,B,M,N);
   break;
   case 2: Output(A,B,M,N);
   break;
   case 3: Sum(A,B,C,M,N);
   break;
   case 4: Diff(A,B,C,M,N);
   break;
   case 5: cout<<"Quitting "<<endl;
   }
  }
  while(Ch!=5);
 cout<<"Do you want more(Y/N) ?";
 cin>>Ans;
 }
 while(Ans=='y' || Ans=='Y');
getch();
}

void Input(int A[10][10], int B[10][10], int M, int N)
{
for(int i=0; i<M; i++)
 for(int j=0; j<N; j++)
 {
 cout<<"A["<<i<<"]["<<j<<"] :: ";
 cin>>A[i][j];
 }

for( i=0; i<M; i++)
 for( j=0; j<N; j++)
 {
 cout<<"B["<<i<<"]["<<j<<"] :: ";
 cin>>B[i][j];
 }
}

void Output(int A[10][10], int B[10][10], int M, int N)
{
for(int i=0; i<M; i++)
{ for(int j=0; j<N; j++)
 {
  cout<<"A["<<i<<"]["<<j<<"] :: "<<A[i][j]<<"    ";
 }
 cout<<endl;
}
for( i=0; i<M; i++)
{ for(int j=0; j<N; j++)
 {
 cout<<"B["<<i<<"]["<<j<<"] :: "<<B[i][j]<<"    ";
 }
 cout<<endl;
}
}

void Sum(int A[10][10], int B[10][10],int C[10][10], int M, int N)
{
for(int i=0; i<M; i++)
 for(int j=0; j<N; j++)
 C[i][j]=A[i][j] + B[i][j];

for(i=0; i<M; i++)
{
 for(int j=0; j<N; j++)
 {
 cout<<"C["<<i<<"]["<<j<<"] :: "<<C[i][j]<<"    ";
 }
 cout<<endl;
}

}

void Diff(int A[10][10], int B[10][10],int C[10][10], int M, int N)
{
for(int i=0; i<M; i++)
 for(int j=0; j<N; j++)
 C[i][j]=A[i][j] - B[i][j];

for( i=0; i<M; i++)
{
 for(int j=0; j<N; j++)
 {
 cout<<"C["<<i<<"]["<<j<<"] :: "<<C[i][j]<<"    ";
 }
 cout<<endl;
}

}