#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float units;
cout<<"Enter units : ";
cin>>units;
if(units<=200)
cout<<"Your Bill is:" <<units*2.25;
else
if(units <=500)
cout<<"Your Bill is :" <<(200*2.25)+(units-200)*3.75;
else
if(units>500)
cout<<"Your Bill is :" <<(200*2.25)+(300*3.75)+(units-500)*5.50;
getch() ;
}