#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
 clrscr();
 textmode(C80);
 int x=0,y=12;
 textcolor(RED);
 _setcursortype(_NOCURSOR);
 int level=0;
 while(level<10)
 {
 while(x<80)
 {
  if(kbhit())
  {
   char ch=getch();
   if(ch=='w')
   {
    clrscr();
    gotoxy(++x,--y);
    delay(75);
    cout<<"";
   }
   else if(ch=='s')
   {
    clrscr();
    gotoxy(++x,++y);
    delay(75);
    cout<<"";
   }
  }
  else
  {
  cout<<"";
  delay(75);
  clrscr();
  gotoxy(++x,y);
  }
 }
 ++level;
}
 getch();
}