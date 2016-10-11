/*
 Program no.:3
 Developed By:Shubham Kumar , Shivam Raj , Soham Mandal
 Date:8-8-2014
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int m1,m2,m3,m4,m5,total;
float avg;
cout<<"Enter The Marks obtained in First Subject: ";
cin>>m1;
cout<<"Enter the Marks obtained in Second Subject: ";
cin>>m2;
cout<<"Enter the marks obtained in Third Subject: ";
cin>>m3;
cout<<"Enter the marks obtained in Fourth Subject: ";
cin>>m4;
cout<<"Enter the marks obtained in Fifth Subject: ";
cin>>m5;
total=m1+m2+m3+m4+m5;
avg=(float)total/5;
cout<<"The Total Marks obtained is: "<<total<<endl;
cout<<"The Average obtained is: "<<avg<<endl;
getch();
}
/*
********* OUTPUT **********
Enter The Marks obtained in First Subject: 93
Enter the Marks obtained in Second Subject: 91
Enter the marks obtained in Third Subject: 87
Enter the marks obtained in Fourth Subject: 90
Enter the marks obtained in Fifth Subject: 95
The Total Marks obtained is: 456
The Average obtained is: 91.199997
*/