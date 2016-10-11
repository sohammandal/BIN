#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
void rev(char [], int);
void count(char[], int, int&, int&, int&);
int len(char []);
void main()
{
 clrscr();
 do
 {
  char ch[50]; int vow, cons, dig, ln;
  cout<<"Enter String :: ";gets(ch);
  ln=len(ch);
  count(ch, ln, vow, cons, dig);
  rev(ch, ln);
  cout<<"More  (Y/N) \n";
 }while(getch()=='y'|| getch()=='Y');
}

int len(char a[])
{
 for(int i=0; a[i]!='\0';i++);
 return i;
}

void count(char a[], int n, int &v, int &c, int &d)
{
 v=0;c=0;d=0;
 for(int i=0;i<	n;i++)
 {
  if(isalnum(a[i]))
  {
   if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||
      a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
    v++;
   else
    if(isdigit(a[i]))
     d++;
   else
     c++;
  }
 }
 cout<<"Vowels = "<<v<<"\t Consonants = "<<c<<"\t Digits = "<<d<<endl;
}

void rev(char a[], int n)
{
 int i=0;
 while(i<n/2)
 {
  char t=a[i];
  a[i]=a[n-1-i];
  a[n-1-i]=t;
  i++;
 }
 cout<<a<<endl;
}