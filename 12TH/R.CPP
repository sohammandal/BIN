#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 ofstream old("new.txt");
 ifstream rdbuf("old.txt");
 old.close();
 rdbuf.close();
 getch();
}


