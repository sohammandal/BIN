/*
List-1
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
char cons[10][50];
int s=0,n=0;
void input(char cons[][50], char inp[],int s)
{
 strcpy(cons[s],inp);
}
void sort(char a[][50], int n)
{
  for(int i=0; i<n-1;i++)
  {
   for(int j=0; j<n-i-1;j++)
   if(strcmpi(a[j+1],a[j])>0)
    {
     char t[50];
     strcpy(t,a[j]);
     strcpy(a[j],a[j+1]);
     strcpy(a[j+1], t);
    }
  }
}

void search(char a[][50], int n)
{
 int found=0, i=0;
 char find[50];
 cout<<"\nCountry Name To Be Searched :: ";
 gets(find);
 while(i<n && !found)
 {
  if(strcmpi(find, a[i])==0)
   found=1;
  else
   i++;
 }
 if(found)
  cout<<"\nCountry Registered "<<endl;
 else
  cout<<"\nCountry not Registered "<<endl;
}

void display(char cons[10][50],int s)
{
 for(int i=0;i<s;i++)
 {
  cout<<n+1<<".  ";
  for(int j=0;j<=24;j++)
  cout<<cons[i][j];
  cout<<endl;
  n++;
 }
}
void main()
{
 clrscr();
 char inp[25],ch;
 inpt:
 cout<<"Enter the name of the country : ";
 gets(inp);
 input(cons,inp,s);
 s++;
 cout<<"Enter more countries ? (y/n) : ";
 cin>>ch;
 if(ch=='y' || ch=='Y')
 goto inpt;
 cout<<endl;
 sort(cons,s);
 display(cons,s);
 search(cons,s);
 getch();
}