/*
List 4
Program 7
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void accept(int[],int);
void display(int[],int);
void insert(int[],int);
void main()
{
 clrscr();
 int A[100],n;
 cout<<"Enter number of terms"<<endl;
 cin>>n;
 cout<<"Enter values"<<endl;
 accept(A,n);
 insert(A,n);
 display(A,n+1);
 getch();
}
void accept(int A[],int n)
{
 for(int i=0;i<n;i++)
  cin>>A[i];
}

void insert(int A[],int n)
{
 int k,l;
 cout<<"Number to be added and position"<<endl;
 cin>>k>>l;
 int Temp=A[l];
 A[l]=k;
 while(l<n+1)
 {
  int t2=A[++l];
  A[l]=Temp;
  Temp=t2;
 }
}
void display(int A[],int n)
{
 for(int i=0;i<n;i++)
  cout<<A[i]<<"  ";
}


/* OUTPUT
Enter number of terms
5                                                                               
Enter values                                                                    
12 34 56 7 9                                                                    
Number to be added and position                                                 
3 2                                                                             
12  34  3  56  7  9
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
