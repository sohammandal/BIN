/*
 Program No.: 17
 Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
 Date: 29/8/14
*/
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,a=0,b=0,c=0,d=0,e=0,f=0;
 float marks;
 cout<<"Enter the total number of students: ";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 cout<<"Enter Marks: ";
 cin>>marks;
 if(marks<=100 && marks>90)
 {
  cout<<"Grade A\n";
  a++;
 }
 else
 if(marks<=90 && marks>70)
 {
  cout<<"Grade B\n";
  b++;
 }
 else
 if(marks<=70 && marks>50)
 {
  cout<<"Grade C\n";
 }
 else
 if(marks<=50 && marks>32)
 {
  cout<<"Grade D\n";
  d++;
 }
 else
 if(marks<=32 && marks>0)
 {
  cout<<"Grade E\n";
  e++;
 }
 else
 {
 cout<<"Invalid Input\n";
 }
 }
 cout<<"The number of Grade A students is: "<<a;
 cout<<"\nThe number of Grade B students is: "<<b;
 cout<<"\nThe number of Grade C students is: "<<c;
 cout<<"\nThe number of Grade D students is: "<<d;
 cout<<"\nThe number of Grade E students is: "<<e;
 getch();
 }
/*
**********OUTPUT************
Enter the total number of students: 4
Enter Marks: 98
Grade A
Enter Marks: 80
Grade B
Enter Marks: 76
Grade B
Enter Marks: 34
Grade D
The number of Grade A students is: 1
The number of Grade B students is: 2
The number of Grade C students is: 0
The number of Grade D students is: 1
The number of Grade E students is: 0
*/