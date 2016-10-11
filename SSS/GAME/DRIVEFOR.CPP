/*

Program : DRIVE FOR YOUR LIFE
Made By : SHAURYA MALIK
Class   : 11
Section : K
Roll No.: 31
*/


#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
void frame();
void gameover();
int mainmenu();
void obstacle1();
void obstacle2();
void obstacle3();
void obstacle4();
void obstacle5();
void obstacle6();
void obstacle7();
void obstacle8();
void obstacle9();
void youwin();
void startscreen();
void playagain();
int a,b,c,d,e,f,g,h;

void game();


void main()
{
  clrscr();
 _setcursortype(_SOLIDCURSOR);
  startscreen();
  delay(1000);
  textcolor(2);
  clrscr();
  if(mainmenu()==1)
   game();

  getch();
}

void frame()
{
    for(int J=1;J<26;J++)
    {
      gotoxy(30,J);
      cout<<"|"<<(char)219<<"|";
      gotoxy(50,J);
      cout<<"|"<<(char)219<<"|";
     }

}
void gameover()
{
  clrscr();
  char A[]={'G','A','M','E',' ','O','V','E','R','.'};
  gotoxy(35,12)     ;
  delay(100);
  for(int i=0;i<10;i++)
  {
    textcolor(2);
    delay(200);
    cout<<A[i];
  }
  delay(1000);
   playagain();

 }

 int mainmenu()
 {

   _setcursortype(_NOCURSOR);
   textmode(C80);
   _setcursortype(_NOCURSOR);
   char choose;
   clrscr();
   textcolor(2);
   gotoxy(30,11);
   cprintf("CHOOSE AN OPTION:");
   gotoxy(30,12);
   cprintf("PRESS P TO PLAY THE GAME");
   gotoxy(30,13);
   cprintf("PRESS I TO VIEW INSTRUCIONS");
   gotoxy(30,14);
   cprintf("PRESS Q TO QUIT\n");
   gotoxy(0,4);
   choose=getch();
   textmode(C80);

    textcolor(2);

   if(choose=='p')
    return 1;
   else if(choose=='i')
   {
    textcolor(2);
    clrscr();
    cout<<"\nINSTRUCTIONS:\n";
    cout<<"In this game you must race the spaceship to the finish line without banging into any\nof the aliens on your way.\n";
    cout<<"-Press N to move the spaceship to the right\n";
    cout<<"-Press V to move the spaceship to the left\n";
    cout<<"-As each level is crossed, the spaceship moves faster";
    delay(10000);
    cout<<"\n\nTo go back to the main menu press M\n";
    cout<<"To quit the game press Q";
    char ch=getch();
     if(ch=='m')
       {
	if(mainmenu()==1)
	game();
       }
     else if(ch=='q')
	exit(EXIT_SUCCESS);

    return 0;

   }
   else if(choose=='q')
   {
     exit(EXIT_SUCCESS);
     return 0;
   }
 }



void game()
{

  for(int N=0;N<100;)
 {
  int m=(N/25);
  frame();
  for(int I=25;I>=0;I--)
  {
    _setcursortype(_NOCURSOR);
    textbackground(BLACK);
    textcolor(2);
    delay(200-m);
    char ch;
    int J,x=0;
    clrscr();


  gotoxy(0,24);
  cout<<"LEVEL:"<<m+1;
  cout<<"\nLEVELS REMAINING:"<<40-(m+1);

    frame();
    if(m%7==0)
     obstacle1();
    else if(m%3==0)
     obstacle2();
    else if(m%4==0)
     obstacle3();
    else if(m%8==0)
     obstacle4();
    else if(m%5==0)
     obstacle5();
    else if(m%2==0)
     obstacle6();
    else if(m%6==0)
     obstacle7();
    else if(m%9==0)
     obstacle8();
    else
     obstacle9();

   if(kbhit())
    {
       ch=getch();
       if(ch==118)
	{
	   x=-5;
	}
       if(ch==110)
	{
	   x=5 ;
	}
      }

      J=40+x;
    gotoxy(J,I);


    if((J==a && I==b) || (J==c && I==d) || (J==e && I==f))
   {
     textcolor(2);
     _setcursortype(_SOLIDCURSOR);

      gameover();
    }
    cout<<"";
    N++;

   }
  I=25;
 }
  youwin();
}

void obstacle1()
{ a=40; b=15;
  c=35; d=10;
  e=45; f=4;
  gotoxy(40,15);
  cout<<"" ;
  gotoxy(35,10);
  cout<<"" ;
  gotoxy(45,4);
  cout<<"" ;
}

void obstacle2()
{ a=35; b=12;
  c=45; d=17;
  e=40; f=6;
  gotoxy(35,12);
  cout<<"";
  gotoxy(45,17);
  cout<<"";
  gotoxy(40,6);
  cout<<"" ;
}

void obstacle3()
{ a=35;b=6;
  c=45;d=18;
  e=40;f=10;
  gotoxy(35,6) ;
  cout<<"";
  gotoxy(45,18)  ;
  cout<<"";
  gotoxy(40,10);
  cout<<"" ;
}

void obstacle4()
{ a=35; b=11;
  gotoxy(35,11) ;
  cout<<"";
  c=40; d=19;
  gotoxy(40,19);
  cout<<"";
  e=45; f=4;
  gotoxy(45,4);
  cout<<"";

}
void obstacle5()
{ a=35; b=17;
  gotoxy(35,17) ;
  cout<<"";
  c=40; d=20;
  gotoxy(40,20);
  cout<<"";
  e=45; f=6;
  gotoxy(45,6);
  cout<<"";

}
void obstacle6()
{ a=35; b=3;
  gotoxy(35,3) ;
  cout<<"";
  c=40; d=12;
  gotoxy(40,12);
  cout<<"";
  e=45; f=19;
  gotoxy(45,19);
  cout<<"";

}


void obstacle7()
{
  a=35; b=6;
  gotoxy(35,6) ;
  cout<<"";
  c=40; d=14;
  gotoxy(40,14);
  cout<<"";
  e=45; f=21;
  gotoxy(45,21);
  cout<<"";

}
void obstacle8()
{ a=35; b=21;
  gotoxy(35,21) ;
  cout<<"";
  c=40; d=17;
  gotoxy(40,17);
  cout<<"";
  e=45; f=9;
  gotoxy(45,9);
  cout<<"";

}
void obstacle9()
{ a=35; b=10;
  gotoxy(35,10) ;
  cout<<"";
  c=40; d=17;
  gotoxy(40,17);
  cout<<"";
  e=45; f=6;
  gotoxy(45,6);
  cout<<"";

}




void youwin()
{

  clrscr();
  char A[]={'Y','O','U',' ','W','I','N','!'};
  gotoxy(35,12)     ;
  delay(100);
  for(int i=0;i<8;i++)
  {
    textcolor(2);
    delay(200);
    cout<<A[i];
  }
  delay(1000);
  mainmenu();
}

void startscreen()
{
  char A[]={'S','H','A','U','R','Y','A',' ','M','A','L','I','K',' ','P','R','E','S','E','N','T','S'};
  char B[]={'D','R','I','V','E',' ','F','O','R',' ','Y','O','U','R',' ','L','I','F','E'};

  clrscr();
  _setcursortype(_NOCURSOR);
  for(int i=0;i<22;i++)
  {
     _setcursortype(_NOCURSOR);
     delay(200);
     textmode(C40);
     textcolor(4);
     gotoxy(10+i,12);

     cout<<A[i];
  }
  delay(1000);
  clrscr();
  for(int j=0;j<19;j++)
   {
     _setcursortype(_NOCURSOR);
      delay(200);
     textmode(C40);
     gotoxy(10+j,12);
     cout<<B[j];
   }
}

void playagain()
{
  _setcursortype(_NOCURSOR);
   textmode(C80);
   _setcursortype(_NOCURSOR);
   char choose;
   clrscr();
   textcolor(2);
   gotoxy(30,11);
   cprintf("CHOOSE AN OPTION:");
   gotoxy(30,12);
   cprintf("PRESS P TO PLAY THE GAME AGAIN");
   gotoxy(30,13);
   cprintf("PRESS Q TO QUIT\n");
   choose=getch();
   if(choose=='p')
    game();
   if(choose=='q')
    exit(EXIT_SUCCESS);
   else
    playagain();
}