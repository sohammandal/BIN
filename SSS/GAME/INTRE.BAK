#include<iostream.h>
#include<conio.h>
#include<dos.h>

void intro();
void menu();

void main()
{
  clrscr();
  textmode(C80);
  gotoxy  (11,12);
   _setcursortype(_NOCURSOR);
  textbackground(WHITE);
  textcolor(RED);
  cprintf("F A P P Y   M A N ");
  delay(2500);
  intro();
  menu();
  getch();


}

void intro()
{
 clrscr();
 textmode(C40);
 textbackground(YELLOW);
 textcolor(BLACK);
 _setcursortype(_NOCURSOR);
 gotoxy (9,13);
 cprintf("D e v e l o p e d   b y ");
 delay(1000);
 clrscr();
 gotoxy (15,13);
 cprintf("V i s h a l");
 delay(1000);
 clrscr();
 gotoxy (15,13);
 cprintf("S p a r s h");
 delay(1000);
 clrscr();
 gotoxy (16,13);
 cprintf("S o h a m");
 delay(1000);
 clrscr();

}

void menu()

{
 int opt=5;

 textmode(C40);
 textcolor(CYAN);
 clrscr();
 gotoxy(12,10);
 cprintf("PRESS 1 TO START\n");
 gotoxy(12,12);
 cprintf("PRESS 2 FOR INSTRUCTIONS\n ");
 gotoxy(12,14);
 cprintf("PRESS 3 TO EXIT\n");
 gotoxy (15,16);
 cin>>opt;


getch();
}