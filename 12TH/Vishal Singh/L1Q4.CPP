/*
List 1 Program 4
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
void Bin(int [100],int);
void Input(int [100],int);
void Disp(int [100],int);
void Sort(int [100],int);


void main()
{
 clrscr();

 int N,A[100];
 cout<<"Enter the number of terms:";
 cin>>N;
 Input(A,N);
 Disp(A,N);
 Sort(A,N);
 Disp(A,N);
 Bin(A,N);
 getch();

}

void Input(int Y[100],int N)
{
 for(int i=0;i<N;i++)
  cin>>Y[i];
}

void Disp(int Y[100],int N)
{
 cout<<endl;
 for(int i=0;i<N;i++)
  cout<<Y[i]<<" ";
}

void Sort(int Y[100],int N)
{
 for(int i=0;i<N-1;i++)
 {
  int small=i;
  for(int j=i+1;j<N;j++)
  {
  if(Y[j]<Y[small])
   small=j;
  }
  if(small!=i)
   {
    int Temp=Y[small];
    Y[small]=Y[i];
    Y[i]=Temp;
   }
 }
}
void Bin(int A[100],int n)
{
 int ub=n-1,lb=0,found=0,mid,no;
 cout<<"\nEnter value to search"<<endl;
 cin>>no;
 while(ub>=lb && !found)
 {
  mid=(lb+ub)/2;
  if(no>A[mid])
   lb=mid+1;
  else if(no<A[mid])
   ub=mid-1;
  else
   found++;
 }
 if(found)
  cout<<"Found"<<endl;
 else
  cout<<"Not Found"<<endl;
}

/*********OUTPUT***********
Enter the number of terms:5
1 100 50 99 60

1 100 50 99 60
1 50 60 99 100
Enter value to search
100
Found
*/