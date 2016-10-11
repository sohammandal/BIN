#include<iostream.h>
#include<conio.h>
void input(int [],int);
void insert(int[],int);
void display(int[],int);
void main()
{
 clrscr();
 int n;
 int a[100];
 cout<<"Enter total no. of elements: \n";
 cin>>n;
 input(a,n);
 insert(a,n);
 display(a,n+1);
 cout<<"\n\nThank You!!!!!";
 getch();
}
void input(int a[], int n)
{
 for(int i=0;i<n;i++)
 {
 cout<<"Enter element "<<i+1<<" : ";cin>>a[i];
 }
}
void insert(int A[],int n)
{
 int val,pos;
 cout<<"Number to be added and position"<<endl;
 cin>>val>>pos;
 int Temp=A[pos];
 A[pos]=val;
 while(pos<n+1)
 {
  int t2=A[++pos];
  A[pos]=Temp;
  Temp=t2;
 }
}
void display(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<"\n"<<a[i]<<endl;
 }
}