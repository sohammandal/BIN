#include <iostream.h>
#include <conio.h>
int main()
{
clrscr();
float unit,tot, mot, sot;
cout<<"enter your unit consumed"<<endl;
cin>> unit;
if(unit <= 200)
{
tot = unit*2.25;
cout<< tot;
}
else
if(unit < 500)
{
mot = 500 + (unit-200 )*3.75;
cout<< mot;}
else
if(unit > 500)
