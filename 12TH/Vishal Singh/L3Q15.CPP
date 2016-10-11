/*
List 3 Question 15
Group 11
Developed by- Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
void Intext()
{
 fstream Fil;
 char choice,A[20],Lin[80];
 cout<<"Enter name of file(.txt)-"; cin>>A;
 Fil.open(A,ios::out);
 cout<<"Enter text\n";
 do
 {
  gets(Lin);
  Fil<<Lin<<endl;
  cout<<"More(Y/N)-";
  cin>>choice;
 }while(toupper(choice)=='Y');
 Fil.close();
}
void Outtext()
{
 fstream Fil;
 char choice,A[20],word[40];
 cout<<"Enter name of file(.txt)-"; cin>>A;
 Fil.open(A,ios::in);
 Fil>>word;
 while(!Fil.eof())
 {
  cout<<word<<endl;
  Fil>>word;
 }
 Fil.close();
}
void main()
{
 clrscr();
 Intext();
 Outtext();
 getch();
}

/**********OUTPUT*************
Enter name of file(.txt)-Story.txt
Enter text                                                                      
Good Morning...                                                                
More(Y/N)-Y                                                                     
My Name is Bond                                                                 
More(Y/N)-Y                                                                     
James Bond                                                                                                                                              
More(Y/N)-N                                                                     
Enter name of file(.txt)-Story.txt                                              
Good
Morning...
My
Name
is
Bond
James
Bond
*/

                                                                                
