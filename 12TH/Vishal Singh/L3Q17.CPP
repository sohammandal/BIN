/*
List 3 Question 17
Group 11
Developed by- Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
void RevText()
{
 fstream Fil;
 char A[40],Lin[80];
 cout<<"Enter name of file(.txt)"; cin>>A;
 Fil.open(A,ios::in);
 while(Fil.getline(Lin,80))
 {
  if(toupper(Lin[0])=='T')
   cout<<strrev(Lin)<<endl;
 }
 Fil.close();
}
void main()
{
 clrscr();
 RevText();
 getch();
}

/**************OUTPUT*******
Enter name of file(.txt)test.txt
amabO si tnediserp ehT

*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
