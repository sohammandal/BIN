#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char fil[5],fi[30]=".txt";
ofstream file;
for(int i=0;i<=5;i++)
{
 sprintf(fil,"%d",i);
 strcat(fil,fi);
 cout<<fil<<endl;
 file.open(fil);
 file<<"YO YO Chotu";
 file.close();
}
getch();
}

