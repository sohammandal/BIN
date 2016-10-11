#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
cin>>ch;
if(ch>='A' && ch<='Z')
 cout<<"Capital Alphabet";
 else if (ch>='a' && ch<='z')
 cout<<"Smallcase Aplhabet";
 else if (ch>='0' && ch<='9')
 cout<<"Digit";
 else if (ch==' ')
 cout<<"Space";
 else
 cout<<"Special Special Character";
getch();
}