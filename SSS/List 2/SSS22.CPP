/*
 List2
 Program No. 18
 Developed by: Soham, Shivam, Shubham
 Date: 31/10/2014
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int num;
 int i=2,prime=1;
 cout<<"Enter the No.: ";
 cin>>num;
 while(i<=num/2 && prime==1)
 {
  if(num%i==0)
  {
   prime=0;
  }
  i++;
 }
 if(prime)
 cout<<"Prime \n ";
 else
 cout<<"Composite \n ";
 getch();
}
/*
*****OUTPUT*********
Enter the No.: 23
Prime
*/






















