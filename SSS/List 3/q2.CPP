/*
Program No. 2
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/

#include<iostream.h>
#include<conio.h>
int Div2(int N);
void main()
{
 clrscr();
 int NUM,M;
 cout<<"Enter the value of NUM:";
 cin>>NUM;
 M=Div2(NUM);
 if(M==1)
 cout<<"Divisible by 2";
 else
 cout<<"Not Divisible by 2";
 getch();
}

int Div2(int M)
{
 if(M%2==0)
 return 1;
 else
 return 0;
}

/*
OUTPUT:
Enter the value of NUM:2
Divisible by 2
*/



















