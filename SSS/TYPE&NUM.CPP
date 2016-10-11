#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int alp=0,dig=0,spe=0 ;
char n,ch;
do
{
cout<<"Enter a character: \n";
cin>>ch;
if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
 {
 cout<<"Alpha\n";
 alp+=1;
 }
else if (ch>='0' && ch<='9')
 {
 cout<<"Digit\n";
 dig+=1;
 }
else
 {
 cout<<"Special\n";
 spe+=1;
 }
cout<<"Do you want to enter more characters?\n";
cin>>n;
}
while (n=='y' || n=='Y');
cout<<"The no. of alphabets entered is: "<<alp;
cout<<"\nThe no. of digits entered is: "<<dig;
cout<<"\nThe no. of special characters is: "<<spe;
getch();
}

