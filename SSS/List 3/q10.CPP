/*
Program No. 10
Group no. 11
Developed by: Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
int fun1(int,int);
float fun2(int,int);
int fun3(int,int);
void main ()
{
 clrscr();
 int x,Pow,choice;
 do
 {
  cout<<"Enter any number:";
  cin>>x;
  cout<<"Enter the power:";
  cin>>Pow;
  cout<<"Choice 1:X+X^2+X^3....X^N\n";
  cout<<"Choice 2:X+X^2/(2!).....X^N/(N!)\n";
  cout<<"Choice 3:X+2*X...N*X;\n";
  cout<<"Choice 4:quit\n";
  cout<<"Enter choice:\n";
  cin>>choice;
  switch(choice)
  {
   case 1:int val=fun1(x,Pow); cout<<val<<endl;
   break;
   case 2:float value=fun2(x,Pow); cout<<value<<endl;
   break;
   case 3:cout<<fun3(x,Pow)<<endl;
   break;
   case 4:cout<<"Quitting.......";
  }
 }while(choice!=4);
 getch();
 }

 int fun1(int x,int p)
 {
  long sum=0;
  int term=1;
  for(int i=1;i<=p;i++)
  {
   term*=x;
   sum+=term;
  }
  return sum;
 }

 float fun2(int x,int p)
 {
  float sum=0;
  int term=1,fact=1;
  for(int i=1;i<=p;i++)
  {
   term*=x;
   fact*=i;
   sum+=float(term)/fact;
  }
  return sum;
 }

 int fun3(int x,int p)
 {
  int term=1;
  long sum=0;
  for(int i=1;i<=p;i++)
  {
   term=i*x;
   sum+=term;
  }
  return sum;
 }
/*
OUTPUT:
Choice 1:X+X^2+X^3....X^N
Choice 2:X+X^2/(2!).....X^N/(N!)
Choice 3:X+2*X...N*X;
Choice 4:quit
Enter choice:
1
14
Enter any number:2
Enter the power:3
Choice 1:X+X^2+X^3....X^N
Choice 2:X+X^2/(2!).....X^N/(N!)
Choice 3:X+2*X...N*X;
Choice 4:quit
Enter choice:
3
12
Enter any number:2
Enter the power:3
Choice 1:X+X^2+X^3....X^N
Choice 2:X+X^2/(2!).....X^N/(N!)
Choice 3:X+2*X...N*X;
Choice 4:quit
Enter choice:
4
Quitting.......
*/