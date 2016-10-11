#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<dos.h>

int op1[4],op2[4];
void chose(int a, char opt)
{
 switch(a)
 {
  case 1:gotoxy(1,5);cout<<opt;break;
  case 2:gotoxy(5,5);cout<<opt;break;
  case 3:gotoxy(9,5);cout<<opt;break;
  case 4:gotoxy(1,7);cout<<opt;break;
  case 5:gotoxy(5,7);cout<<opt;break;
  case 6:gotoxy(9,7);cout<<opt;break;
  case 7:gotoxy(1,9);cout<<opt;break;
  case 8:gotoxy(5,9);cout<<opt;break;
  case 9:gotoxy(9,9);cout<<opt;break;
  default : cout<<"Invalid option .. chance gone !! ";break;
  }
}
int check(int ar1[4],int ar2[3])
{
 int chk=0;
 for(int e=1;e<=4;e++)
 {
  for(int z=1;z<=3;z++)
  {
  if(ar1[e]==ar2[z])chk++;
  }
 }
 return chk;
}
int winsit()
{
 int win=0;
 int win1[3]={1,2,3};
 int win2[3]={4,5,6};
 int win3[3]={7,8,9};
 int win4[3]={1,4,7};
 int win5[3]={2,5,8};
 int win6[3]={3,6,9};
 int win7[3]={1,5,9};
 int win8[3]={3,5,7};
 if(check(op1,win1)==3)win=1;
 if(check(op1,win2)==3)win=1;
 if(check(op1,win3)==3)win=1;
 if(check(op1,win4)==3)win=1;
 if(check(op1,win5)==3)win=1;
 if(check(op1,win6)==3)win=1;
 if(check(op1,win7)==3)win=1;
 if(check(op1,win8)==3)win=1;
 if(check(op2,win1)==3)win=1;
 if(check(op2,win2)==3)win=1;
 if(check(op2,win3)==3)win=1;
 if(check(op2,win4)==3)win=1;
 if(check(op2,win5)==3)win=1;
 if(check(op2,win6)==3)win=1;
 if(check(op2,win7)==3)win=1;
 if(check(op2,win8)==3)win=1;
 return win;
}
void draw()
{
 gotoxy(0,5);
 cout<<"TIC TAC TOE ";
 gotoxy(3,5);
 cout<<"||";
 gotoxy(7,5);
 cout<<"||";
 gotoxy(3,7);
 cout<<"||";
 gotoxy(7,7);
 cout<<"||";
 gotoxy(3,9);
 cout<<"||";
 gotoxy(7,9);
 cout<<"||";
}
void play()
{
 for(int i=1;i<=4;i++)
 {
 gotoxy(1,12);
 int b,c;
 cout<<"\nPlayer 1 chance ... Enter your choice (1-9) : ";
 cin>>b;
 op1[i]=b;
 chose(b,'X');
 if(winsit()==1)
 {
  clrscr();
  cout<<"PLAYER 1 WON ";
  getch();
  break;
 }
 gotoxy(1,12);
 cout<<"\nPlayer 2 chance ... Enter your choice (1-9) : ";
 cin>>c;
 op2[i]=c;
 chose(c,'O');
 if(winsit()==1)
 {
  clrscr();
  cout<<"PLAYER 2 WON";
  getch();
  break;
 }
}
}
void main()
{
 clrscr();
 draw();
 play();
 getch();
}
