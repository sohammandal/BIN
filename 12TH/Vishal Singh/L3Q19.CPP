/*
List 3 Question 19
Group 11
Developed by- Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
class ACCOUNT
{
 int Acno;
 char Name[20];
 float Balance;
 public:
 void Init()
 {
  cout<<"Account number-"; cin>>Acno;
  cout<<"Name-"; gets(Name);
  cout<<"Balance-"; cin>>Balance;
 }
 void Show()
 {
  cout<<"Account number-"<<Acno<<endl;
  cout<<"Name-"<<Name<<endl;
  cout<<"Balance-"<<Balance<<endl;
 }
 void Deposit(int Amt)
 {
  Balance+=Amt;
 }
 void Withdraw(int Amt)
 {
  Balance-=Amt;
 }
 float RBalance()
 {
  return Balance;
 }
 float RAcno()
 {
  return Acno;
 }
};
void Register()
{
 ACCOUNT T;
 fstream Fil;
 Fil.open("Accounts.dat", ios::binary | ios::out);
 char Choice='Y';
 do
 {
 T.Init();
 Fil.write((char*)&T,sizeof(T));
 cout<<"More(Y/N)-";
 cin>>Choice;
 }while(toupper(Choice)=='Y');
 Fil.close();
}
void Transact()
{
 int T,choice,found=0;
 float Amt;
 ACCOUNT S;
 cout<<"Enter Account number-";  cin>>T;
 fstream Fil;
 Fil.open("Accounts.dat",ios::binary | ios::out | ios::in);
 while(!found && Fil.read((char*)&S,sizeof(S)))
  if(S.RAcno()==T && S.RBalance()>=500)
   found++;
 if(found)
 {
  cout<<"Enter Amount-"; cin>>Amt;
  cout<<"1.Deposit or 2.Withdraw"; cin>>choice;
  if(choice==1)
   S.Deposit(Amt);
  else if(choice==2)
   S.Withdraw(Amt);
  int N=Fil.tellg()-sizeof(S);
  Fil.seekp(N);
  Fil.write((char*)&S,sizeof(S));
 }
 else
  cout<<"Not Found!"<<endl;
 Fil.close();
}
void DisplayAll()
{
 fstream Fil;
 Fil.open("Accounts.dat",ios::binary | ios::in);
 ACCOUNT T;
 while(Fil.read((char*)&T,sizeof(T)))
  T.Show();
}
void main()
{
 clrscr();
 int choice;
 do
 {
  cout<<"Enter Choice-1.Register 2.Transact 3.Display 4.Exit-"; cin>>choice;
  if(choice==1)
   Register();
  else if(choice==2)
   Transact();
  else if(choice==3)
   DisplayAll();
  }while(choice!=4);
 getch();
}

/*************OUTPUT*************************
Enter Choice-1.Register 2.Transact 3.Display 4.Exit-1
Account number-420
Name-Soham
Balance-8000
More(Y/N)-Y
Account number-69
Name-Shivam
Balance-10000
More(Y/N)-N
Enter Choice-1.Register 2.Transact 3.Display 4.Exit-2
Enter Account number-1000
Not Found!
Enter Choice-1.Register 2.Transact 3.Display 4.Exit-2
Enter Account number-420
Enter Amount-200
1.Deposit or 2.Withdraw 2
Enter Choice-1.Register 2.Transact 3.Display 4.Exit-3
Account number-420
Name-Soham
Balance-7800
Account number-69
Name-Shivam
Balance-10000
Enter Choice-1.Register 2.Transact 3.Display 4.Exit-4
*/