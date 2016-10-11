/*
 Program no.: 11
 Developed By : Shivam Raj, Shubham Kumar, Soham Mandal
 Date : 8-8-2014
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch;
 int e;
 cout<<"Enter a Character : ";
 cin>>ch;
 e=ch;
 if(e>=65 && e<=91)
 cout<<"You entered a Capital Alphabet ";
 else if(e>=97 && e<=123)
 cout<<"You entered a smallcase Alphabet ";
 else if(e>=48 && e<=58)
 cout<<"You entered a Digit ";
 else if(ch==' ')
 cout<<"You entered a white space ";
 else
 cout<<"You entered a special character ";
 getch();
}
/*
******** OUTPUT **********
Enter a Character : $
You entered a special character
*/
