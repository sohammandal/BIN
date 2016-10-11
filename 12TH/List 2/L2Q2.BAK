
/*
List-2
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct candidate
{
	int cno,score;
	char cname[20];
};
void input(candidate A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<" Enter the Candidate Number ";
		cin>>A[i].cno;
		cout<<" Enter the Candidate Name ";
		gets(A[i].cname);
		cout<<" Enter the Candidate Score ";
		cin>>A[i].score;
	}
}
void output(candidate A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Candidate Number: "<<A[i].cno<<endl;
		cout<<"Candidate Name: "<<A[i].cname<<endl;
		cout<<"Candidate Score: "<<A[i].score<<endl;
	}
}
void bubsort(candidate A[],int n)
{
	candidate term;
	for(int i=0;i<n-1;i++)
	{
		if(A[i].score>A[i+1].score)
		{
			term=A[i];
			A[i]=A[i+1];
			A[i+1]=term;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<"Candidate Number: "<<A[i].cno<<endl;
		cout<<"Candidate Name: "<<A[i].cname<<endl;
		cout<<"Candidate Score: "<<A[i].score<<endl;
	}
}
void main()
{
	clrscr();
	candidate A[10];
	int n,ch;
	cout<<" Enter the number of Candidates :  ";
	cin>>n;
		for(int i=1;i<=4;i++)
	{
		cout<<"Press 1 to enter details "<<endl;
		cout<<"Press 2 to display details "<<endl;
		cout<<"Press 3 to sort scores "<<endl;
		cout<<"Press 4 to exit "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:input(A,n);break;
			case 2:output(A,n);break;
			case 3:bubsort(A,n);break;
			case 4:exit(1);break;
		}
	}
	getch();
}
/*
**********OUTPUT**************
 Enter the number of Candidates :  1
Press 1 to enter details
Press 2 to display details
Press 3 to sort scores
Press 4 to exit
1
 Enter the Candidate Number 10
 Enter the Candidate Name Soham
 Enter the Candidate Score 100
Press 1 to enter details
Press 2 to display details
Press 3 to sort scores
Press 4 to exit
2
Candidate Number: 10
Candidate Name: Soham
Candidate Score: 100
Press 1 to enter details
Press 2 to display details
Press 3 to sort scores
Press 4 to exit
4
*/