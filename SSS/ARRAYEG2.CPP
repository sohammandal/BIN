#include<iostream.h>
#include<conio.h>
void Register(long e[],int n)
{
 for (int i=0;i<n;i++)
 {
  cout<<"["<<i<<"] Eno? ";
  cin>>e[i];
 }
}
void search(long e[],int n,int eno)
{
 int found=0;
 for (int i=0;i<n && found==0;i++)
 if (e[i]==eno)
 found=1;
 if(found==1)
 cout<<eno<<" is found."<<endl;
 else
 cout<<eno<<" is not found."<<endl;
}
void main()
{
 clrscr();
 long eno[6],enos;
 cout<<"Enter all Emp. Nos.: "<<endl;
 Register(eno,6);
 cout<<"Eno to be searched: "<<endl;
 cin>>enos;
 search(eno,6,enos);
 getch();
}