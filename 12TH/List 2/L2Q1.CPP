/*
List-2
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
struct book
{
 int bno;
 char author[20],bname[20];
 float price;
};
void enter(book b[100],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<"Enter number of book "<<i+1<<" : ";cin>>b[i].bno;
  cout<<"Enter author of book "<<i+1<<" : ";gets(b[i].author);
  cout<<"Enter name of book "<<i+1<<" : ";gets(b[i].bname);
  cout<<"Enter price of book "<<i+1<<" : ";cin>>b[i].price;
 }
}
void display(book b[100],int n)
{
 for(int i=1;i<=n;i++)
 cout<<"\nBook Number: "<<b[i].bno<<endl;
 cout<<"Book Author: "<<puts(b[i].author)<<endl;
 cout<<"Book Name: "<<puts(b[i].bname)<<endl;
 cout<<"Book Price: "<<b[i].price<<endl;
}
void searchbno(book b[100],int n)
{
 int bn;
 cout<<"Enter the Book No. to be searched : "<<endl;
 cin>>bn;
  for(int i=1;i<n;i++)
   {
   if(bn==b[i].bno)
    {
     cout<<"Book No. :"<<b[i].bno<<endl;
     cout<<"Book Author :"<<b[i].author<<endl;
     cout<<"Book Name :"<<b[i].bname<<endl;
     cout<<"Book Price :"<<b[i].price<<endl;
    }
   else
   cout<<"Book doesn't match....TRY AGAIN "<<endl;
  }
}
void searchbname(book b[100],int n)
{
 int found=0, i=0;
 char find[50];
 cout<<"\nBook Name To Be Searched :: ";
 gets(find);
 while(i<n && !found)
 {
  if(strcmpi(find, b[i].bname)==0)
   found=1;
  else
   i++;
 }
 if(found)
 {
     cout<<"Book No. :"<<b[i].bno<<endl;
     cout<<"Book Author :"<<b[i].author<<endl;
     cout<<"Book Name :"<<b[i].bname<<endl;
     cout<<"Book Price :"<<b[i].price<<endl;
  }
 else
  cout<<"\nBook not Registered "<<endl;
}
void main()
{
	clrscr();
	book b[10];
	int n,ch;
	cout<<" Enter the number of Books :";
	cin>>n;
	for(int i=0;i<=4;i++)
	{
		cout<<"Press 1 to Enter Details "<<endl;
		cout<<"Press 2 to Display Details "<<endl;
		cout<<"Press 3 to Find the Book No.  "<<endl;
		cout<<"Press 4 to Exit "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:enter(b,n);break;
			case 2:display(b,n);break;
			case 3:searchbno(b,n);break;
			case 4:exit(1);break;
		}
	}
	getch();
}
/*

********* OUTPUT ***********

Book Number: 2

Book Number: 0

Book Author: 10

Book Name: 10
Book Price: 0
Press 1 to Enter Details
Press 2 to Display Details
Press 3 to Find the Book No.
Press 4 to Exit
3
Enter the Book No. to be searched :
002
Book No. :2
Book Author :D.C Pandey
Book Name :Bayern Munich
Book Price :225
Press 1 to Enter Details
Press 2 to Display Details
Press 3 to Find the Book No.
Press 4 to Exit
4

*/

