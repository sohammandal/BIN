/*
 Program no. : 2
 Developed By: Shivam Raj , Shubham Kumar , Soham Mandal
 Date: 8-8-2014
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 double pi=3.14;
 double r,area,cf;
 cout<<"Enter the Radius of the circle : ";
 cin>>r;
 area=pi*r*r;
 cf=2*pi*r;
 cout<<"The circumference of the circle is : "<<cf<<endl;
 cout<<"The Area of the circle is : "<<area<<endl;
 getch();
}
/*
*********** OUTPUT ************
Enter the Radius of the circle : 10
The circumference of the circle is : 62.8
The Area of the circle is : 314
*/