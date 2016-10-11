/*
Program No. 6
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/

#include<iostream.h>
#include<conio.h>
int Sum(int);
void main()
{
 clrscr();
 int N1,N2,N3;
 cout<<"Enter N1:";
 cin>>N1;
 cout<<Sum(N1)<<"\n";
 cout<<"Enter N2:";
 cin>>N2;
 cout<<Sum(N2)<<"\n";
 cout<<"Enter N3:";
 cin>>N3;
 cout<<Sum(N3)<<"\n";
 getch();
}

int Sum(int N)
{
 int ext,reverse=0,M=N;
 while(M!=0)
 {
  ext=M%10;
  reverse+=ext;
  M/=10;
 }
  return reverse;
}

/*
OUTPUT:
Enter N1:23
5
Enter N2:435
12
Enter N3:2345
14
*/
