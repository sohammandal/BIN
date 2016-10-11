/*
Program No.11
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
void square(int);
void main()
{
 clrscr();
 square(1);
 square(3);
 square(5);
 getch();
}

void square(int N)
{
 for(int i=0;i<N;i++)
 {
  for(int j=0;j<N;j++)

   cout<<"*";
   cout<<endl;
 }
 cout<<endl;
}
/*
********OUTPUT*********

*

***
***
***

*****
*****
*****
*****
*****

*/