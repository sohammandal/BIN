/*
List-2
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct account
{
	int acno;
	char name[20];
	float balance;
};
void input(account A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Account Number ";
		cin>>A[i].acno;
		cout<<"Enter the Name of the Account Holder ";
		gets(A[i].name);
		cout<<"Enter the Balance ";
		cin>>A[i].balance;
	}
}
void output(account A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Account Number: "<<A[i].acno<<endl;
		cout<<"Account Holder: "<<A[i].name<<endl;
		cout<<"Balance: "<<A[i].balance<<endl;
	}
}
void balcheck(account A[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i].balance>100000.00)
		{
			cout<<"Account Number: "<<A[i].acno<<endl;
			cout<<"Account Holder: "<<A[i].name<<endl;
			cout<<"Balance: "<<A[i].balance<<endl;
		}
	}
}
void main()
{
	clrscr();
	account A[10];
	int n,ch;
	do
	{
		cout<<" Enter the number of Accounts < 10 ";
		cin>>n;
	}while(n>=10);
	for(int i=1;i<=4;i++)
	{
		cout<<"Press 1 to enter details "<<endl;
		cout<<"Press 2 to display details "<<endl;
		cout<<"Press 3 to check balance "<<endl;
		cout<<"Press 4 to exit "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:input(A,n);break;
			case 2:output(A,n);break;
			case 3:balcheck(A,n);break;
			case 4:exit(1);break;
		}
	}
	getch();
}

