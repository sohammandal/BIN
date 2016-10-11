/*
List-1
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
void input(int a[][10],int n,int m,int s)
{
 for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
  {
   cout<<"Enter content for Array"<<s<<"["<<i<<"]["<<j<<"] : ";
   cin>>a[i][j];
  }
  cout<<endl;
}
void display(int a[][10],int n,int m,int s)
{
 for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
  {
   cout<<"Array"<<s<<"["<<i<<"]["<<j<<"] : "<<a[i][j]<<endl;
  }
  cout<<endl;
}
void add(int a[][10],int b[][10],int c[][10])
{
 for(int i=0;i<3;i++)
 for(int j=0;j<3;j++)
 {
  c[i][j]=a[i][j]+b[i][j];
 }
}
void sub(int a[][10],int b[][10],int c[][10])
{
 for(int i=0;i<3;i++)
 for(int j=0;j<3;j++)
 {
  c[i][j]=a[i][j]-b[i][j];
 }
}

void main()

{
 clrscr();
 int n,m;
 cout<<"Enter the no. of rows required:  ";
 cin>>n;
 cout<<"Enter the no. of columns required:  ";
 cin>>m;
 int arr1[10][10];
 int arr2[10][10];
 int arr3[10][10];
 int arr4[10][10];
 input(arr1,n,m,1);
 input(arr2,n,m,2);
 display(arr1,n,m,1);
 display(arr2,n,m,2);
 add(arr1,arr2,arr3);
 display(arr3,n,m,3);
 sub(arr1,arr2,arr4);
 display(arr4,n,m,4);
 getch();
}