/*
 List 2
 Program 21B
 Developed by: Soham, Shivam, Shubham
 Date: 7/11/14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float fact=1;
 long n,sum=0;
 cout<<"Enter N: ";
 cin>>n;
 for (int i=1;i<=n;i++)
 {
 fact*=i;
 }
 cout<<fact;
 getch();
}
/*
********OUTPUT********
Enter N: 8
40320
*/
