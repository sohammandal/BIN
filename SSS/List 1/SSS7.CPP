/*
 Program no.:10
 Developed By : Shivam Raj , Shubham Kumar , Soham Mandal
 Date : 8-8-2014
*/

#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int age;
 char ch;
 cout<<"Enter Your Age : ";
 cin>>age;
 cout<<"Enter Your Gender (M/F) : ";
 cin>>ch;
 if(ch=='m' || ch=='M')
 {
  if(age>=60)cout<<"You are assigned floor 7 ";
  if(age<60 && age>=20)cout<<"You are assigned floor 6";
  if(age<20 && age>=10)cout<<"You are assigned floor 5";
  if(age<10)cout<<"You are assigned floor 4 ";
 }
 if(ch=='f' || ch=='F')
 {
  if(age>=58)cout<<"You are assigned floor 3";
  if(age<58 && age>=18)cout<<"You are assigned floor 2";
  if(age<18 && age>=10)cout<<"You are assigned floor 1";
  if(age<10)cout<<"You are assigned Ground Floor ";
 }
getch();
}
/*
******* OUTPUT ************
Enter Your Age : 56
Enter Your Gender (M/F) : f
You are assigned floor 2
*/