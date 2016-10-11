/*
Program No. 1
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
void main()
{
float fuel,dist,avg;
clrscr();
cout<<"Enter Quantity of Fuel consumed in litres: ";
cin>>fuel;
cout<<"\nEnter Distance Travelled in km: ";
cin>>dist;
avg=dist/fuel;
cout<<"\nThe mileage of your vehicle is: "<<avg;
getch();
}
/*
************* OUTPUT ************
Enter Quantity of Fuel consumed in litres: 80

Enter Distance Travelled in km: 1000

The mileage of your vehicle is: 12.5
*/