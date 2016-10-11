#include<iostream.h>
#include<conio.h>
void selectiona(float a[],int n)
{
 for (int i=0;i<n-1;i++)
 {
  int small=i;
  for (int j=i+1;j<n;j++)
   if (a[small]>a[j])
    small=j;
   if (small!=i)
   {
    int t=a[small];
    a[small]=a[i];
    a[i]=t;
   }
  }
  cout<<"In ascending order: ";
  for(int s=0;s<n;s++)
  cout<<a[s]<<" ";
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
 selectiona(a,5);
 getch();
}