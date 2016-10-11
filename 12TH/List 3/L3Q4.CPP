#include<fstream.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void countavd()
{
 ifstream Fil("story.txt");
 char ch;
 int a=0,v=0,d=0;
 while(!Fil.eof())
 {
  ch=Fil.get();
  if (int(ch)>=48 && int(ch)<=57)
    d++;
  else if (toupper(ch)=='A' || toupper(ch)=='E'|| toupper(ch)=='I' || toupper(ch)=='O' || toupper(ch)=='U')
    v++;
  else if ((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    a++;
 }
 cout<<"No. of Alphabets: "<<a;
 cout<<"\nNo. of Digits: "<<d;
 cout<<"\nNo. of Vowels: "<<v;
 Fil.close();
}
void main()
{
 clrscr();
 cout<<"Reading File...\n\n\n";
 countavd();
 getch();
}