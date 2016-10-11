/*
List-1
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int vow=0,cons=0,dig=0;
void count(char ch[],int l)
{
 for(int i=0;i<l;i++)
 {
  if(ch[i]>=65 && ch[i]<=91 || ch[i]>=97 && ch[i]<=123)
  switch(ch[i])
  {
   case 'a':
   case 'A':
   case 'e':
   case 'E':
   case 'i':
   case 'I':
   case 'o':
   case 'O':
   case 'u':
   case 'U':vow++;break;
   default :cons++;break;
  }
  else if(ch[i]>=48 && ch[i]<=57)dig++;
 }
}
void main()
{
 clrscr();
 char ch[40];
 cout<<"Enter the String : ";
 gets(ch);
 int l=strlen(ch);
 count(ch,l);
 cout<<"Number of Vowels : "<<vow<<endl;
 cout<<"Number of Consonants : "<<cons<<endl;
 cout<<"Number of Digits : "<<dig<<endl;
 getch();
}