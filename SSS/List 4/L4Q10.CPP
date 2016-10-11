#include<iostream.h>
#include<conio.h>
void input(int[][5],int,int);
void sum2d(int[][5],int[][5],int[][5],int,int);
void display(int[][5],int,int);
void main()
{
 clrscr();
 int a[5][5],b[5][5],r,c,x[5][5];
 cout<<"Enter no. of Rows: \n";cin>>r;
 cout<<"Enter no. of Columns: \n";cin>>c;
 cout<<"Enter values in Array 1:\n";
 input(a,r,c);
 cout<<"Enter values in Array 2:\n";
 input(b,r,c);
 sum2d(a,b,x,r,c);
 cout<<"The final array is: \n";
 display(x,r,c);
 cout<<"\n\nThank You!!!!!!";
 getch();
}
void input(int a[][5],int r,int c)
{
 for(int i=0;i<r;i++)
 for(int j=0;j<c;j++)
 cin>>a[i][j];
}
void sum2d(int a[][5],int b[][5],int x[][5],int r,int c)
{
 for(int i=0;i<r;i++)
 for(int j=0;j<c;j++)
 x[i][j]=a[i][j]+b[i][j];
}
void display(int a[][5],int r,int c)
{
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 cout<<a[i][j]<<" ";
 cout<<endl;
 }
}