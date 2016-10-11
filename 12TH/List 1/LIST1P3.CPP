#include<iostream.h>
#include<conio.h>
void iput(int [], int);
void oput(int [], int);
void sort(int [], int);
void search(int [], int);
void main()
{
 clrscr();
 int a[100], n; char more, ch;
 do
 {
 cout<<"Enter Number Of Terms : ";
 cin>>n;
 do{
 cout<<"A. Enter Values\nB. Display Values\nC. Sort"
     <<"\nD. Search\nE. Quit\n";
 cout<<"Enter Choice : ";
 cin>>ch;
 switch(ch)
 {
  case 'A':
  case 'a': iput(a,n);
  break;
  case 'B':
  case 'b': oput(a, n);
  break;
  case 'c':
  case 'C': sort(a, n);
  break;
  case 'd':
  case 'D': search(a,n);
 }
 }while(ch!='e'&& ch!='E');
 cout<<"A.New	B.Exit\n";more=getch();
 }while(more == 'a'||more=='A');
}

void iput(int a[], int n)
{
 for(int i=0; i<n;i++)
 {
  cout<<"Enter Element ["<<i+1<<"] : ";
  cin>>a[i];
 }
}

void oput(int a[], int n)
{
 for(int i=0; i<n; i++)
  cout<<"Element a ["<<i+1<<"] : "<<a[i]<<endl;
}

void sort(int a[], int n)
{
 for(int i=1; i<n;i++)
 {
  int j=i-1, temp=a[i];
  while(a[j]>temp&& j>=0)
  {
   a[j+1]=a[j];
   j--;
  }
  a[j+1]=temp;
 }
}

void search(int a[], int n)
{
 int item, found=0, i=0;
 cout<<"Enter Value To Be Searched : ";
 cin>>item;
 while(i<n&&!found)
 {
  if(a[i]==item)
   found=1;
  i++;
 }
 if (found)
  cout<<"Entery Found At Position "<<i<<endl;
 else
  cout<<"Not Found!!"<<endl;
}