/*
Program no. 7
Developed by Shivam Raj, Shubham Kumar, Soham Mandal
Date 8-8-2014
*/
#include <iostream.h>
#include<conio.h>
void main()
{
clrscr();
int eng,mat,sci;
cout<<"Enter your Marks in English : ";
cin>>eng;
cout<<"\nEnter your Marks in Maths : ";
cin>>mat;
cout<<"\nEnter your Marks in Science : ";
cin>>sci;
cout<<"\nYour total marks is : ";
float avg,total;
avg=(eng+mat+sci)/3;
total=eng+mat+sci;
cout<<total;
cout<<"\nYour average is : "<<avg;
cout<<"\nYour percentage is : "<<avg<<"%";
if (avg>=50)
cout<<"\nYou are Selected ";
else
cout<<"\nYou are not Selected";
getch();
}
/*
********* OUTPUT **********
Enter your Marks in English : 78

Enter your Marks in Maths : 85

Enter your Marks in Science : 90

Your total marks is : 253
Your average is : 84
Your percentage is : 84%
You are Selected
*/