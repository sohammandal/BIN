#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void filecopy();
void main()
{
 clrscr();
 filecopy();
 getch();
}
void filecopy()
{
 for(int i=0;i<=5;i++)
 {
 char ch[30];
 sprintf(ch,"%d",i);
 strcat(ch,".txt");
 cout<<ch<<endl;
 ofstream itzv(ch);
 itzv<<"Hi";
 itzv.close();
 }
}