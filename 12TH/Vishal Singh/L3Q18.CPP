/*
List 3 Question 18
Group 11
Developed by- Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
class Candidate
{
 int Cno,score;
 char CName[20];
 public:
 void Enter()
 {
  cout<<"Number-";cin>>Cno;
  cout<<"Name-";cin>>CName;
  cout<<"Score-";cin>>score;
 }
 void Display();
 int RScore()
 {
  return score;
 }
};
void Candidate::Display()
{
 cout<<"Number-"<<Cno;
 cout<<"  Name-"<<CName<<"  Score-"<<score<<endl;
}
void Enrol()
{
 fstream Fil;
 Fil.open("Candidate.dat",ios::binary | ios::out);
 Candidate A;
 cout<<"Enter student's details\n";
 char choice;
 do
 {
  A.Enter();
  Fil.write((char*) &A,sizeof(A));
  cout<<"More(Y/N)";
  cin>>choice;
 }while(toupper(choice)=='Y');
 Fil.close();
}
void GetPass()
{
 fstream Fil;
 Fil.open("Candidate.dat",ios::binary | ios::in);
 Candidate A;
 while(Fil.read((char*) &A,sizeof(A)))
 {
  if(A.RScore()>=33)
  A.Display();
 }
 Fil.close();
}
void main()
{
 clrscr();
 Enrol();
 GetPass();
 getch();
}

/*********OUTPUT*********
Enter student's details
Number-100                                                                      
Name-Soham                                                                      
Score-100                                                                       
More(Y/N)Y                                                                      
Number-69                                                                      
Name-Shivam                                                                     
Score-20                                                                        
More(Y/N)Y                                                                      
Number-42                                                                      
Name-Shubham                                                                    
Score-81                                                                        
More(Y/N)N
Number-100  Name-Soham  Score-100
Number-42  Name-Shubham  Score-81
*/









