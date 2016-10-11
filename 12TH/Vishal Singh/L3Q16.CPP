/*
List 3 Question 16
Group 11
Developed by- Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
void CountAvd()
{
 fstream Fil;
 char A[40],ch;
 cout<<"Enter file name(.TXT)-"; cin>>A;
 int Vow=0,Alpha=0,Dig=0;
 Fil.open(A,ios::in);
 ch=Fil.get();
 while(!Fil.eof())
 {
  if(isalpha(ch))
  {
   Alpha++;
   ch=toupper(ch);
   if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    Vow++;
   }
  else if(isdigit(ch))
   Dig++;
  ch=Fil.get();
 }
 cout<<"No. of Alphabets="<<Alpha<<endl;
 cout<<"No. of Vowels="<<Vow<<endl;
 cout<<"No. of Digits="<<Dig<<endl;
 Fil.close();
}
void main()
{
 clrscr();
 CountAvd();
 getch();
}

/************OUTPUT*********
Enter file name(.TXT)-Story.txt
No. of Alphabets=32
No. of Vowels=11
No. of Digits=0

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
