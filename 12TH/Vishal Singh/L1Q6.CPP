/*
List 1 Program 6
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void count(char [100],int n);
void reverse(char [100],int n);
void main()
{
 clrscr();
 char A[100];
 cout<<"Enter string \n";
 gets(A);
 for(int n=0;A[n]!='\0';n++);
 count(A,n);
 reverse(A,n);
 cout<<A<<endl;
 getch();
}
void count(char A[100],int n)
{
 int cons=0,vowels=0,digits=0;
 for(int i=0;i<n;i++)
 {
  if((A[i]>='a' && A[i]<='z') || (A[i]>='A' && A[i]<='Z'))
  {
   if(A[i]=='a'|| A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' || A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
    vowels++;
   else
    cons++;
  }
  else if(A[i]>='0' && A[i]<='9')
  digits++;
 }
 cout<<"Number of consonants"<<cons<<endl;
 cout<<"Number of vowels"<<vowels<<endl;
 cout<<"Number of digits"<<digits<<endl;
}
void reverse(char A[100],int n)
{
 int t;
 for(int i=0;i<=(n-1)/2;i++)
 {int t=A[n-i-1];
  A[n-i-1]=A[i];
  A[i]=t;
 }
}

/********OUTPUT*************
Enter string
Apple
Number of consonants3
Number of vowels2
Number of digits0
elppA
*/