/*
Program No. 8
Developed by- Soham Mandal , Shubham Kumar , Shivam Raj
Date 8-8-2014
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char ch;
 cout<<"Enter Your Grade : ";
 cin>>ch;
 switch(ch)
 {
  case 'a':
  case 'A': cout<<"Range for your grade is 90 - 100";break;
  case 'b':
  case 'B': cout<<"Range for your grade is 89 - 75";break;
  case 'c':
  case 'C': cout<<"Range for your grade is 60 - 74";break;
  case 'd':
  case 'D': cout<<"Range for your grade is 45 - 59";break;
  case 'e':
  case 'E': cout<<"Range for your grade is 33 - 44";break;
  case 'f':
  case 'F': cout<<"Range for your grade is 0 - 32";break;
  default : cout<<"Enter a valid Grade ";
}
getch();
}
/*
********* OUTPUT ************
Enter Your Grade : B
Range for your grade is 89 - 75
*/