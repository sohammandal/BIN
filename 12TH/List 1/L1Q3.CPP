/*
List-1
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<dos.h>
int n,t=0;
void input(int a[])
{
 inp:
 char ch;
 cout<<"\nEnter the terms : ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter number ["<<i<<"] : ";
  cin>>a[t];
  t++;
 }
  cout<<"\nEnter more numbers ?  (y/n) ";
  cin>>ch;
  if(ch=='y')
  goto inp;
}
void display(int a[])
{
 cout<<"\n";
 for(int i=0;i<n;i++)
 cout<<a[i]<<"   ";
 getch();
}
void sort(int a[])
{
 for(int i=1; i<n;i++)
 {
  int j=i-1, temp=a[i];
  while(a[j]>temp && j>=0)
  {
   a[j+1]=a[j];
   j--;
  }
  a[j+1]=temp;
 }
}
void search(int a[],int data)
{
 int found=0;
 for(int i=0;i<n;i++)
 {
  if(a[i]==data)found++;
 }
 cout<<"\nTotal "<<found<<" objects found ";
 getch();
}
void main()
{
 clrscr();
 int arr[30],ser;
 input(arr);
 display(arr);
 delay(1000);
 sort(arr);
 clrscr();
 cout<<"\nEnter the number to be searched : ";
 cin>>ser;
 search(arr,ser);
}
