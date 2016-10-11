/*
list no:2
Q no:19
date : 31-10-14
developed by : Soham Mandal , Shivam Raj , Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int sum=0,num1,n,no;
 cout<<"Enter the number : ";
 cin>>num1;
 no=num1;
 cout<<"The sum of ";
 do
 {
  n=num1%10;
  cout<<"( "<<n<<"*"<<n<<"*"<<n<<" ) + ";
  sum+=(n*n*n);
  num1=num1/10;
 }
 while(num1!=0);
 cout<<"0 is : "<<sum;
 if(sum==no)cout<<"\nAngstrom number ";
 else cout<<"\nNot an angstrom number ";
 getch();
}

/*
*******OUTPUT**********
Enter the number : 1990
The sum of ( 0*0*0 ) + ( 9*9*9 ) + ( 9*9*9 ) + ( 1*1*1 ) + 0 is : 1459
Not an angstrom number
*/





















