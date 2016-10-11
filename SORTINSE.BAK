#include<iostream.h>
#include<conio.h>
void insertiona(float a[],int n)
{
 for (int i=1;i<n;i++)
 {
  int temp=a[i],j=i-1;
  while(temp<a[j] && j>=0)
  {
   a[j+1]=a[j];
   j--;
  }
 a[j+1]=temp;
 }
 cout<<"In ascending order: ";
 for (int k=0;k<n;k++)
 cout<<a[k]<<" ";
}
void enter(float m[], int n)
{
 for (int i=0;i<n;i++)
 {
  cout<<"Enter "<<i+1<<"st value: "<<endl;
  cin>>m[i];
 }
}
void main()
{
 clrscr();
 float a[5];
 enter(a,5);
 insertiona(a,5);
 getch();
}