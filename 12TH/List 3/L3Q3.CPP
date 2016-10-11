/*
 Program No   : 15
 Developed by : Soham Mandal, Shubham Kumar, Shivam Raj
 Date         : 02-August-2015
*/
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
void intext()
{
 ofstream Fil("story.txt");
 char line[80], reply;
 do
 {
  cout<<"Enter a line\n: ";
  gets(line);
  Fil<<line<<endl;
  cout<<"More?(Y for yes) ";
  cin>>reply;
 }
 while(toupper(reply)=='Y');
 Fil.close();
}
void outtext()
{
 ifstream Fil("story.txt");
 char word[40];
 while(!Fil.eof())
 {
  Fil>>word;
  cout<<word<<endl;
 }
 Fil.close();
}
void main()
{
 clrscr();
 cout<<"Entering content...\n\n\n";
 intext();
 cout<<"Displaying content...\n\n\n";
 outtext();
 getch();
}
