/*


**********************************************************
*        PROJECT:                 "FAPPY MAN"            *
* DEVELOPERS- SOHAM MANDAL, SPARSH SHUBHAM, VISHAL SINGH *
**********************************************************



*/


#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>


void game();
void intro();
void menu();
void gameover();
void obs1();
void obs2();
void obs3();
void obs4();
void obs5();

int a,b,c,d,e,f,g,h,i,j,k,l;

void main()

{
  clrscr();
  textmode(C40);
  clrscr();
  gotoxy  (6,12);
  _setcursortype(_NOCURSOR);
  textbackground(CYAN);
  textcolor(RED);
  cprintf("F  A  P  P  Y      M  A  N");
  delay(2500);
  delay(1000);
  intro();
  menu();
  getch();
}

void intro()

{
 clrscr();
 textmode(C40);
 textbackground(WHITE);
 textcolor(YELLOW);
 _setcursortype(_NOCURSOR);
 gotoxy (9,13);
 cprintf("D e v e l o p e d   b y");
 delay(2000);
 clrscr();
 gotoxy (10,13);
 cprintf("V I S H A L   S I N G H");
 delay(2000);
 clrscr();
 gotoxy (10,13);
 cprintf("S O H A M   M A N D A L");
 delay(2000);
 clrscr();
 gotoxy (8,13);
 cprintf("S P A R S H   S H U B H A M");
 delay(2000);
 clrscr();
}

void menu()

{
 int opt;
 textmode(C40);
 textcolor(GREEN);
 clrscr();
 gotoxy(12,10);
 cout<<"PRESS 1 TO START\n";
 gotoxy(12,12);
 cout<<"PRESS 2 FOR INSTRUCTIONS\n ";
 gotoxy(12,14);
 cout<<"PRESS 3 TO EXIT\n";
 gotoxy (20,16);
 cin>>opt;
 if(opt==3)
 exit(EXIT_SUCCESS);
 else if(opt==2)
    {
     clrscr();
     int ch;
     cout<<"1. Press W to move up and S to move down"<<endl;
     cout<<endl;
     cout<<"2. Play on to level up"<<endl;
     cout<<endl<<endl;
     cout<<"Press 1 for the Main Menu and 2 to Exit"<<endl<<endl;
     cin>>ch;
     if(ch==1)
     menu();
     else
     exit(EXIT_SUCCESS);
    }
 else if(opt==1)
     game();
}

void obs1()

{
 a=12,b=49,c=15,d=40,e=7,f=70,g=10,h=11,i=9,j=16,k=14,l=50;
 gotoxy(b,a);
 int x=219;
 char ch=x;
  cout<<ch;
 gotoxy(d,c);
  cout<<ch;
 gotoxy(f,e);
  cout<<ch;
 gotoxy(h,g);
  cout<<ch;
 gotoxy(j,i);
  cout<<ch;
 gotoxy(l,k);
  cout<<ch;
}

void obs2()

{
 a=8,b=30,c=14,d=75,e=12,f=60,g=10,h=15,i=17,j=34,k=18,l=69;
 gotoxy(b,a);
 int x=219;
 char ch=x;
  cout<<ch;
 gotoxy(d,c);
  cout<<ch;
 gotoxy(f,e);
  cout<<ch;
 gotoxy(h,g);
  cout<<ch;
 gotoxy(j,i);
  cout<<ch;
 gotoxy(l,k);
  cout<<ch;
}

void obs3()

{
 a=7,b=69,c=10,d=35,e=13,f=49,g=8,h=65,i=12,j=29,k=11,67;
 gotoxy(b,a);
 int x=219;
 char ch=x;
  cout<<ch;
 gotoxy(d,c);
  cout<<ch;
 gotoxy(f,e);
  cout<<ch;
 gotoxy(h,g);
  cout<<ch;
 gotoxy(j,i);
  cout<<ch;
 gotoxy(l,k);
  cout<<ch;
}

void obs4()

{
 a=11,b=15,c=8,d=45,e=15,f=60,g=18,h=75,i=7,j=48,k=14,l=44;
 gotoxy(b,a);
 int x=219;
 char ch=x;
  cout<<ch;
 gotoxy(d,c);
  cout<<ch;
 gotoxy(f,e);
  cout<<ch;
 gotoxy(h,g);
  cout<<ch;
 gotoxy(j,i);
  cout<<ch;
 gotoxy(l,k);
  cout<<ch;
}

void obs5()

{
 a=9,b=29,c=13,d=56,e=10,f=75,g=18,h=23,i=17,j=18,k=7,l=49;
 gotoxy(b,a);
 int x=219;
 char ch=x;
  cout<<ch;
 gotoxy(d,c);
  cout<<ch;
 gotoxy(f,e);
  cout<<ch;
 gotoxy(h,g);
  cout<<ch;
 gotoxy(j,i);
  cout<<ch;
 gotoxy(l,k);
  cout<<ch;
}

void gameover()

{
 gotoxy(35,12);
 _setcursortype(_SOLIDCURSOR);
 char ch[]={'G','A','M','E',' ','O','V','E','R','.'};
 for(int i=0;i<10;i++)
 {
  delay(300);
  textcolor(GREEN);
  cout<<ch[i];
 }
 delay(3000);

 menu();
}

void area()

{
 int x,y1=5,y2=20;
 for(x=1;x<80;x+=2)
 {
  gotoxy(x,y1);
   cout<<(char)219<<"_";
  gotoxy(x,y2);
   cout<<(char)219<<"_";
 }
}

void game()

{
 textmode(C80);
 int y=13;
 int J;
 for(int level=0;level<=10;level++)
 {
  for(int x=0;x<80;)
  {
  clrscr();
  textbackground(RED);
  textcolor(YELLOW);
  area();
  _setcursortype(_NOCURSOR);
  gotoxy(0,12);
  cout<<"Level is "<<level;

 if(level%7==0)
  obs1();
 else if(level%5==0)
  obs2();
 else if(level%3==0)
  obs3();
 else if(level%2==0)
  obs4();
 else
  obs5();

  if(kbhit())
  {
   char ch=getch();
   if(ch=='w')
   {
    J=-1;
   }
   else if(ch=='s')
   {
    J=1;
   }
  }
  else
  {
   J=0;
  }
  y=y+J;
  gotoxy(x++,y);
  if(y<=5)
   y=19;
  if(y>=20)
   y=6;
  cout<<"";

  if((x-1==b && y==a)||(x-1==d && y==c)||(x-1==f && y==e)||(x-1==h && y==g)||(x-1==j && y==i)||(x-1==l && y==k))
  {
   clrscr();
   textbackground(BLACK);
   textcolor(GREEN);
   gotoxy(35,0);
   cout<<"Final Level===="<<level;
   gameover();
   }
  delay(60-(level*5));
  }
}


   clrscr();
   gotoxy(40,11);
   textbackground(BLACK);
   textcolor(GREEN);
   cprintf("YOU WIN");
   delay(3000);
   menu();
}






