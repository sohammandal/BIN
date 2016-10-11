/*
List-1
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
void iput(int a[], int n)
{
 for(int i=0; i<n;i++)
 {
  cout<<"Term "<<i+1<<" : ";
  cin>>a[i];
 }
}

void oput(int a[], int n)
{
 cout<<endl;
 for(int i=0; i<n; i++)
  cout<<a[i]<<"  ";
  cout<<endl<<endl;
}

void sort(int a[], int n)
{
 for(int i=0; i<n-1;i++)
 {
  for(int j=i+1;j<n;j++)
  {
  int small=i;
  if(a[small]>a[j])
  {
   small=j;
  }
  if(small !=i)
  {
   int t=a[i];
   a[i]=a[small];
   a[small]=t;
  }
 }
 }
}

void search(int a[], int n)
{
 int item, lb=0, ub=n, found=0, mid;
 cout<<"Enter Value To Be Searched : ";
 cin>>item;
 while(ub>=lb && !found)
 {
  mid=(lb+ub)/2;
  if(a[mid]<item)
   lb=mid+1;
  else
   if(a[mid]>item)
    ub=mid-1;
  else
   found=1;
 }

 if (found)
  cout<<"Entery Found "<<endl;
 else
  cout<<"Not Found!!"<<endl;
}
void main()
{
 clrscr();
 int a[100], n=0, opt;
 do
 {
 cout<<"1. Enter Values\n2. Display Values\n3. Sort"
     <<"\n4. Search\n5. Quit\n";
 cout<<"Enter Choice : ";
 cin>>opt;
 switch(opt)
 {
  case 1: cout<<"Enter Number Of Terms : ";cin>>n;iput(a,n);
  break;
  case 2: oput(a, n);
  break;
  case 3: sort(a, n);
  break;
  case 4 : search(a,n);
 }
 }while(opt!=5);
 exit(1);
}