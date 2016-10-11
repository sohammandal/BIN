/*
 =======================CBSE BOARD PROJECT=================
	BY:
		SOHAM MANDAL XII-K  (ROLL NO: 34)
		TAKSH HASIJA XII-K  (ROLL NO: 37)
 ==========================================================
*/
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<dos.h>
#include<process.h>

void enterstudent();
void viewstudent();
void editstudent();
void deletestudent();

class student
{
 int admno;
 int percentage;
 char name[40];
 char stream[20];
 int phone;
 char address[100];
 public:
 void add()
  {
  clrscr();
  cout<<"\nEnter Name of Student: \n";
  gets(name);
  cout<<"\nEnter Admission No. of Student: \n";
  cin>>admno;
  cout<<"\nEnter Stream of Student: \n";
  gets(stream);
  cout<<"\nEnter Percentage of Student: \n";
  cin>>percentage;
  cout<<"\nEnter Phone Number of Student: \n";
  cin>>phone;
  cout<<"\nEnter Address of Student: \n";
  gets(address);
  }

 void display()
  {
  cout<<"\nDetails of "; puts(name); cout<<"are as follows:";
  cout<<"\nAdmission Number: "<<admno;
  cout<<"\nStream: "<<stream;
  cout<<"\nPercentage: "<<percentage<<"%";
  cout<<"\nPhone No.: "<<phone;
  cout<<"\nAddress: "<<address;
  cout<<"\n\n";
  }

 void changename()
  {
  cout<<"\nEnter Name of Student: \n";
  gets(name);
  }

 void changeadmno()
  {
  cout<<"\nEnter Admission No. of Student: \n";
  cin>>admno;
  }

 void changestream()
  {
  cout<<"\nEnter Stream of Student: \n";
  gets(stream);
  }

 void changepercentage()
  {
  cout<<"\nEnter Percentage of Student: \n";
  cin>>percentage;
  }

 void changephone()
  {
  cout<<"\nEnter Phone Number of Student: \n";
  cin>>phone;
  }

 void changeaddress()
  {
  cout<<"\nEnter Address of Student: \n";
  gets(address);
  }
 int giveadmno()
  {
  return admno;
  }
 int givepercentage()
  {
  return percentage;
  }
 int givephone()
  {
  return phone;
  }
 int comparestream(char s[])
  {
  if(strcmpi(s,stream)==0)
  return 1;
  else return 0;
  }
 int comparename(char n[])
  {
  if(strcmpi(n,name)==0)
  return 1;
  else return 0;
  }
};


void enterstudent()
{
 clrscr();
 fstream Fil;
 Fil.open("student.dat", ios::binary | ios::app);
 student s; char ch;
 do
 {
  s.add();
  Fil.write((char*)&s,sizeof(s));
  cout<<"\nAdd another student? (y/n)\n";
  cin>>ch;
 }
 while (ch=='y' || ch=='Y');
 Fil.close();
}

void editstudent()
{
  clrscr();
  fstream Fil;
  Fil.open("student.dat", ios::binary | ios::in | ios::out);
  student s; int admiss, choice, found=0;
  cout<<"\nEnter Admission No. of student: ";
  cin>>admiss;
  while (Fil.read((char*)&s,sizeof(s)))
  {
  if (admiss==s.giveadmno())
  {
   s.display();
   cout<<"\nWhat would you like to change?\n";
   cout<<"1. Name\n2. Admission No.\n3. Stream\n4. Percentage\n";
   cout<<"5. Phone\n6. Address\n";
   cin>>choice;

   switch(choice)
   {
    case 1: s.changename(); 			break;
    case 2: s.changeadmno(); 			break;
    case 3: s.changestream();			break;
    case 4: s.changepercentage();       	break;
    case 5: s.changephone();			break;
    case 6: s.changeaddress();			break;
    default: cout<<"Wrong Input..\n";
   }
   int n=Fil.tellg()-sizeof(s);
   Fil.seekp(n);
   Fil.write((char*)&s,sizeof(s));
   found++;
  }
  }
  if (found==0)
  cout<<"\nStudent not found!..\n";
  Fil.close();
}

void viewstudent()
{
 clrscr();
 fstream Fil;
 student s;
 int choice,n,found=0;
 Fil.open("student.dat", ios::binary | ios::in);
 cout<<"\nEnter 1 if you would like to view all students\n";
 cout<<"Enter 2 if you want to view a particular record\n";
 cin>>choice;
 if(choice==1)
 {
  while (Fil.read((char*)&s,sizeof(s)))
  {
   s.display();
  }
 }
 else if (choice==2)
 {
  cout<<"\nSearch by:\n1.Name\n2.Admno\n3.Stream\n4.Percentage\n5.Phone\n";
  cin>>n;
  if(n==1)
  {
   char namequery[40];
   cout<<"\nEnter Name: "; gets(namequery);
   while (Fil.read((char*)&s,sizeof(s)))
   {
    if (s.comparename(namequery))
    {
     s.display();
     found++;
    }
   }
   if (found==0)
   cout<<"Record not found..\n";
  }
  else if(n==2)
  {
   int admnoquery;
   cout<<"\nEnter Admno: "; cin>>admnoquery;
   while (Fil.read((char*)&s,sizeof(s)))
   {
    if (s.giveadmno()==admnoquery)
    {
     s.display();
     found++;
    }
   }
   if (found==0)
   cout<<"Record not found..\n";
  }
  else if(n==3)
  {
   char streamquery[20];
   cout<<"\nEnter Stream: "; gets(streamquery);
   while (Fil.read((char*)&s,sizeof(s)))
   {
    if (s.comparestream(streamquery))
    {
     s.display();
     found++;
    }
   }
   if (found==0)
   cout<<"Record not found..\n";
  }
  else if(n==4)
  {
   int percentquery;
   cout<<"\nEnter Percentage: "; cin>>percentquery;
   while (Fil.read((char*)&s,sizeof(s)))
   {
    if (s.givepercentage()==percentquery)
    {
     s.display();
     found++;
    }
   }
   if (found==0)
   cout<<"Record not found..\n";
  }
  else if(n==5)
  {
   int phonequery;
   cout<<"\nEnter Phone: "; cin>>phonequery;
   while (Fil.read((char*)&s,sizeof(s)))
   {
    if (s.givephone()==phonequery)
    {
     s.display();
     found++;
    }
   }
   if (found==0)
   cout<<"Record not found..\n";
  }
  else
  cout<<"Wrong Input..";
 }
 Fil.close();
}

void deletestudent()
{
 clrscr();
 fstream f1, f2;
 student s;
 int admiss;
 f1.open("student.dat",ios::binary | ios::in);
 f2.open("temp.dat",ios::binary | ios::out);
 cout<<"\nEnter Admno of student to be deleted: \n";
 cin>>admiss;
 int del=0;
 while (f1.read((char*)&s,sizeof(s)))
  {
  if (s.giveadmno()!=admiss)
   f2.write((char*)&s,sizeof(s));
  else
   del++;
  }
 if(!del)
  cout<<"\nStudent not found...\n";
  else
  cout<<"\nDeleted...\n";
 f1.close();
 f2.close();
 remove("student.dat");
 rename("temp.dat","student.dat");
}

void menu()
{
 clrscr();
 cout<<"\n\t\t\t\t****MENU****";
 cout<<"\n\n\t\tEnter 1 to Add a New Student\n";
 cout<<"\t\tEnter 2 to Edit the Record of a Student\n";
 cout<<"\t\tEnter 3 to View Student(s)\n";
 cout<<"\t\tEnter 4 to Delete a Record\n";
 cout<<"\t\tEnter 5 to Exit\n\n\t\t";
 int ch;
 cin>>ch;
 if(ch==1)
 enterstudent();
 else if(ch==2)
 editstudent();
 else if(ch==3)
 viewstudent();
 else if(ch==4)
 deletestudent();
 else if(ch==5)
 exit(0);
 else
 getch();
}

void startscreen()
{
char A[]={'C','B','S','E',' ','P','R','O','J','E','C','T'};
char B[]={'B','Y',' ','S','O','H','A','M',' ','M','A','N','D','A','L',' ','A','N','D',' ','T','A','K','S','H',' ','H','A','S','I','J','A'};
clrscr();
_setcursortype(_NOCURSOR);
for(int i=0;i<12;i++)
{
_setcursortype(_NOCURSOR);
delay(50);
textcolor(4);
gotoxy(35+i,10);

cout<<A[i];
}
delay(500);
clrscr();
for(int j=0;j<32;j++)
{
_setcursortype(_NOCURSOR);
delay(50);
gotoxy(23+j,10);
cout<<B[j];
}delay(1000);
}

void main()
{
 clrscr();
 startscreen();
 char opt;
 do
 {
  menu();
  cout<<"Back to Home? (y/n): ";
  cin>>opt;
 } while (opt=='y' || opt=='Y');
}