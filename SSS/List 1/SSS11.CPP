/*
  List1
  Q.No 5
  Developed by Soham Mandal, Shubham Kumar, Shivam Raj
  Date:18/7/14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float bus,suv,car,twowheeler;
cout<<"Enter number of Buses: ";
cin>>bus;
cout<<"\nEnter number of SUVs: ";
cin>>suv;
cout<<"\nEnter number of Cars: ";
cin>>car;
cout<<"\nEnter number of Two Wheelers: ";
cin>>twowheeler;
cout<<"\nThe total amount collected is: "<<(bus*100)+(suv*40)+(car*30)+(twowheeler*10);
getch();
}
/*
******* OUTPUT **********
Enter number of Buses: 5

Enter number of SUVs: 2

Enter number of Cars: 3

Enter number of Two Wheelers: 2

The total amount collected is: 690
*/