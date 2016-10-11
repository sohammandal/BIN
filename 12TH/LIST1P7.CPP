#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void reg(char [][100],int n);
void sort(char [][100], int n);
void search(char [][100], int n);
void disp(char [][100], int n);
void main()
{
 clrscr();
 char a[100][100];int n;
 do
 {
  cout<<"Enter Number Of Countries : : ";
  cin>>n;
  reg(a,n);
  sort(a, n);
  disp(a, n);
  search(a,n);
  cout<<"Press X twice and enter to exit : Any other key combination"<<
	" to continue\n";
 }while(getch()!='X'&& getch()!='x');
  getch();
}


void reg(char a[][100], int n)
{
 for(int i=0; i<n; i++)
 {
  cout<<"ENTER COUNTRY "<<i+1<<"::::";
  gets(a[i]);
 }
 cout<<endl;
}


void sort(char a[][100], int n)
{
  for(int i=0; i<n-1;i++)
  {
   for(int j=0; j<n;j++)
   if(strcmpi(a[j+1],a[j])>0)
    {
     char t[100];
     strcpy(t,a[j]);
     strcpy(a[j],a[j+1]);
     strcpy(a[j+1], t);
    }
  }
}

void search(char a[][100], int n)
{
 int found=0, i=0;
 char sear[100];
 cout<<"Enter Country Name To Be Searched :: ";
 gets(sear);
 while(i<n && !found)
 {
  if(strcmpi(sear, a[i])==0)
   found=1;
  else
   i++;
 }
 if(found)
  cout<<"Country Registered "<<endl;
 else
  cout<<"Country Not Registered "<<endl;
}

void disp(char a[][100], int n)
{
 cout<<"List Of Countries :-"<<endl;
 for(int i=0; i<n;i++)
  cout<<i+1<<". "<<a[i]<<endl;
}
