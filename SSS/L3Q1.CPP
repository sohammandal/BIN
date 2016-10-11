//NOT COMPLETED YET
#include<iostream.h>
#include<conio.h>
int i=2,prime=1,j=1;
int isprime(int j)
{
 while(i<=(j/2) && prime==1)
 {
 if ((j%i)==0)
 {
 return 1;
 prime==0;
 }
 else
 return 0;
 }
}
void main()
{
clrscr();
for(int j=1;j<=100;j++)
if (isprime(j))
cout<<j;
else
cout<<" ";
getch();
}