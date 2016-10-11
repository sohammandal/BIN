/*
	Practical List:3
	Program No    :4
	Developed By  :Soham Mandal, Shubham Kumar, Shivam Raj
	    
	Date:13-Nov-14
*/


#include<iostream.h>
#include<conio.h>
long Power(int x,int y)
{int term=1;
 for (int i=1;i<=y;i++)
 {term*=x;
 }return term;
}
void main()
{
clrscr();
int a,b,sum=0;
cout<<"Enter a:";
cin>>a;
cout<<"Enter b:";
cin>>b;
for (int j=1;j<=b;j++)
    {Power(a,j);
     sum+=Power(a,j);}
     cout<<"Sum is:"<<sum;
getch();
}
/*
******************************************************************************
OUTPUTEnter a:2
Enter b:2
Sum is:6
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
