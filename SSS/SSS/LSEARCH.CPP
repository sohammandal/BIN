#include<iostream.h>
#include<conio.h>
void enter(long a[], int n)
{
 for (int i=0;i<n;i++)
 {
 cout<<"Enter Emp. No.: ";
 cin>>a[i];
 }
}
void search(long a[],int n,int eno)
{
 int found=0;
 for (int i=0;i<n && found==0;i++)
 if (a[i]==eno)
 found=1;
 if (found==1)
 cout<<eno<<" is found."<<endl;
 else
 cout<<eno<<" is not foumd."<<endl;
}
void main()
{
 clrscr();
 long eno[6],enos;
 cout<<"Enter all Emp. Nos.: "<<endl;
 enter(eno,6);
 cout<<"Search Term: ";
 cin>>enos;
 search(eno,6,enos);
 getch();
}


