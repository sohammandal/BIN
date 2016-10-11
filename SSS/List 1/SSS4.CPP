/*
Program No : 9
Developed By : Soham mandal , Shivam Raj , Shubham Kumar
Class Section : XI K
Date : 25-July-2014
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 double a,b;
 cout<<"Enter the first real number : ";
 cin>>a;
 cout<<"Enter the second real number : ";
 cin>>b;
 char op;
 cout<<"Enter the Arithmetic Operation to be performed out of + , - , * , / , % : ";
 cin>>op;
 int c=a,d=b;
 switch(op)
 {
  case '+' : cout<<a<<" + "<<b<<" = "<<a+b;break;
  case '-' : cout<<a<<" - "<<b<<" = "<<a-b;break;
  case '*' : cout<<a<<" * "<<b<<" = "<<a*b;break;
  case '/' : cout<<a<<" / "<<b<<" = "<<a/b;break;
  case '%' : cout<<a<<" % "<<b<<" = "<<c%d;break;
  default : cout<<"Please Enter a valid Arithmetic Operator";
 }
 getch();
}
/*
******** OUTPUT *********
Enter the first real number : 78
Enter the second real number : 56
Enter the Arithmetic Operation to be performed out of + , - , * , / , % : +
78 + 56 = 134
*/