/*
List-2
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct date
{
	int day,month,year;

};
struct student
{
	int admno;
	char sname[20];
	date dob;
};
void input(student A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Admission Number: ";
		cin>>A[i].admno;
		cout<<"Enter the Student's Name: ";
		gets(A[i].sname);
		cout<<"Enter the Birthdate: ";
		cin>>A[i].dob.day;
		cout<<"Enter the Birth Month: ";
		cin>>A[i].dob.month;
		cout<<"Enter the Birth Year: ";
		cin>>A[i].dob.year;
	}
}
void output(student A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Admission Number: "<<A[i].admno<<endl;
		cout<<"Student Name: "<<A[i].sname<<endl;
		cout<<"DOB: "<<A[i].dob.day<<"/"<<A[i].dob.month<<"/"<<A[i].dob.year;
		cout<<endl;
	}
}
void searchbday(student A[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(A[i].dob.day && A[i].dob.month==3 ||A[i].dob.day && A[i].dob.month==2||A[i].dob.day && A[i].dob.month==1)
		{
			if(A[i].dob.year==1990)
			{
			      cout<<"Admission Number: "<<A[i].admno<<endl;
			      cout<<"Student Name: "<<A[i].sname<<endl;
			      cout<<"DOB: "<<A[i].dob.day<<"/"<<A[i].dob.month<<"/"<<A[i].dob.year;
			      cout<<endl;
			}
		}
	}
}
void main()
{
	clrscr();
	student A[10];
	int n,ch;
	cout<<" Enter the number of Students: ";
	cin>>n;
	for(int i=1;i<=4;i++)
	{
		cout<<"Press 1 to Enter Details "<<endl;
		cout<<"Press 2 to Display Details "<<endl;
		cout<<"Press 3 to Search with Birthdays  "<<endl;
		cout<<"Press 4 to Exit "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:input(A,n);break;
			case 2:output(A,n);break;
			case 3:searchbday(A,n);break;
			case 4:exit(1);break;
		}
	}
	getch();
}

