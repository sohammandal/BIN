#include<iostream.h>
#include<conio.h>
void bubblea(float a[],int n)
{
 for (int i=0;i<n-1;i++)
 {
  for (int j=0;j<n-i-1;j++)
   if (a[j]>a[j+1])
   {
    int t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
 }
 cout<<"In ascending order: ";
 for(int k=0;k<n;k++)
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
 bubblea(a,5);
 getch();
}