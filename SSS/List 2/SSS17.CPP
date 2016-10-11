/*
 List NO. 2
 Program No. 13
 Developed By- Soham, Shubham, Shivam
 Date- 28/8/14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 double n,fact=1,sum=0;
 cout<<"Enter the N terms : ";
 cin>>n;
 for(int i=1;i<=n;i+=2)
  {
  fact*=i;
  sum+=fact;
  }
 cout<<"The Sum of the Series is : "<<sum;
 getch();
 }
/*
  ********OUTPUT*********
 Enter the N terms : 5
 The Sum of the Series is : 19
*/