/*
List 1 Program 3
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
void Input(int[100],int);
void Disp(int[100],int);
void Sort(int[100],int);
void Search(int[100],int);
void main()
{
 clrscr();
 int A[100],n;
 cout<<"Enter number of terms \n";
 cin>>n;
 Input(A,n);
 Disp(A,n);
 cout<<endl;
 Sort(A,n);
 Disp(A,n);
 cout<<endl;
 Search(A,n);
 getch();
}

void Input(int Y[100],int A)
{
 cout<<"Enter values\n";
 for(int i=0;i<A;i++)
  cin>>Y[i];
}

void Disp(int Y[100],int A)
{
 for(int i=0;i<A;i++)
 cout<<Y[i]<<"\t";
}

void Sort(int Y[100],int A)
{
 for(int i=1;i<A;i++)
 {
  int j=i-1;
  int temp=Y[i];
  while(temp<Y[j] && j>=0)
  {
   Y[j+1]=Y[j];
   j--;
  }
  Y[++j]=temp;
 }
}
void Search(int Y[100],int A)
{
 int n;
 cout<<"\nEnter number\n";
 cin>>n;
 int i=0,found=0;
 while(i<A && !found)
 {
  if(Y[i]==n)
   found++;
  else
   i++;
 }
 if(found)
  cout<<"\nAt "<<i;
 else
  cout<<"\nNot found";
}

/*OUTPUT
Enter number of terms
5
Enter values
71 23 100 99 1
71      23      100     99      1
1       23      71      99      100

Enter number
99

At 3
*/
































