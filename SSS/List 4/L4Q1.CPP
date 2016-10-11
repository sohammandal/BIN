/* 
  List 4 Program 1
  Developed by: Soham Mandal, Shubham Kumar, Shivam Raj
*/  
#include<iostream.h>
#include<conio.h>
void enter(float a[],int n)
{
 for (int i=0;i<n;i++)
 {
 cout<<"Enter Marks of Student "<<i+1<<endl;
 cin>>a[i];
 }
}
void maxmarks(float a[],int n)
{
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-i-1;j++)
  if (a[j]<a[j+1])
  {
   float t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
  }
 }
 cout<<"Maximum Marks are: "<<a[0]<<endl;
}
void minmarks(float a[],int n)
{
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-i-1;j++)
  if (a[j]>a[j+1])
  {
   float t=a[j];
   a[j]=a[j+1];
   a[j+1]=t;
  }
 }
 cout<<"Minimum Marks are: "<<a[0]<<endl;
}
void main()
{
 clrscr();
 float marks[5];
 enter(marks,5);
 maxmarks(marks,5);
 minmarks(marks,5);
 getch();
}
