#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
clrscr();
delay(1000);
textmode(C40);
gotoxy(16,12);
textcolor(RED);
cprintf("GAME OVER!");
_setcursortype(_NOCURSOR);
getch();
}