#include<iostream.h>
#include<conio.h>
void enter(float m[],int n)
{
 for (int i=1;i<=n;i++)
 {
  cout<<"Roll No. "<<i<<"  ";
  cin>>m[i];
 }
}
float average(float m[],int n)
{
 float sum=0;
 for (int i=1;i<=n;i++)
 sum+=m[i];
 return sum/n;
}
void main()
{
 clrscr();
 float a[6],b[8],c[5],avg;
 cout<<"Marks of Section A: "<<endl;
 enter(a,6);
 avg=average(a,6);
 cout<<"Section A Average: "<<avg<<endl;
 cout<<"Enter marks of Section B: "<<endl;
 enter(b,8);
 avg=average(b,8);
 cout<<"Sec B Average: "<<avg<<endl;
 cout<<"Enter marks of Section C: "<<endl;
 enter(c,5);
 avg=average(c,5);
 cout<<"Section C Average: "<<avg<<endl;
 getch();
}