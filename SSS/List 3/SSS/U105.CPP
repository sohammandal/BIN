/*
	Program List:3
	Program No  :5
	Developed By:Soham Mandal, Shubham Kumar, Shivam Raj
	  
	Date: 13-November-2014
*/
#include<iostream.h>
#include<conio.h>
long Reverse(long Num)
{int Rev;
 while(Num>0)
 {Rev=(Rev*10)+(Num%10);
  Num=Num/10;
 }return Rev;
}
void main()
{long Num;
 cout<<"Enter Num:";
 cin>>Num;
 if(Num==Reverse(Num))
 cout<<"It is a Palindrome";
 else
 cout<<"Not a Palindrome";
}