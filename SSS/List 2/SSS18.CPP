/*
 List 2
 Program No.:14
 Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
 Date:28/8/14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch,a;
 int i=0;
 do
 {
  cout<<"Enter a character : ";
  cin>>ch;
   if(ch<='9' && ch>='0')
    cout<<"Digit\n";
  else
  if((ch>='A' && ch<='Z') || (ch>=97 && ch<=122))
    cout<<"Alpha\n";
  else
    cout<<"Special\n";
  i++;
    cout<<"Enter more characters?(y/n):  ";
    cin>>a;
 }
 while(a=='y');
  cout<<"The number of characters entered is: "<<i<<endl;
 getch();
 }
/*
***********OUTPUT*************
Enter a character : w
Alpha
Enter more characters?(y/n): y
Enter a character : 4
Digit
Enter more characters?(y/n): y
Enter a character : !
Special
Enter more characters?(y/n) n
The number of characters entered is: 3
*/