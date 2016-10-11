#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 ifstream EF;
 EF.open("EN.txt");
 char ch[100];
 while(!EF.eof())
 {
  EF.getline(ch,70);
  cout<<EF<<endl;
 }
 EF.close();
 getch();
}



