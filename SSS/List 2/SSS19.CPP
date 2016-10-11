/*
 List2
 Program No.:15
 Developed by: Soham mandal, Shivam Raj, Shubham Kumar
 Date:28/8/14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 float fact=1;
 cout<<"Enter the number: ";
 cin>>n;
 for(int i=1;i<=n;i++)
  fact=fact*i;
 cout<<"The factorial of "<<n<<" is: " <<fact;
 getch();
}
/*
**************OUTPUT**********
Enter the number: 5
The factorial of 5 is: 120
*/