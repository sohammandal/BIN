#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
class CANDIDATE
{
 int Cno;
 char Cname[20];
 int Score;
 public:
 void enter(){cin>>Cno;gets(Cname);cin>>Score;}
 void display(){cout<<Cno<<':'<<Cname<<':'<<Score;}
 int rscore(){return Score;}
};
void enrol()
{
 fstream Fil;
 Fil.open("Candidate.dat",ios::binary|ios::out);
 CANDIDATE C;
 char choice;
 do
 {
  C.enter();

  Fil.write((char*)&C,sizeof(C));
  cout<<"More?(Y/N): ";
  cin>>choice;
 }
 while (choice=='Y');
 Fil.close();
}
void GetPass(int s)
{
 fstream Fil; CANDIDATE C;
 Fil.open("Candidate.dat",ios::binary|ios::in);

 while (Fil.read((char*)&C,sizeof(C)))
  if(s>=33)
  C.display();
 Fil.close();
}
void main()
{
 clrscr(); CANDIDATE C;
 int s;
 enrol();
 s=C.rscore();
 GetPass(s);
 getch();
}