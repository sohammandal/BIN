/*	 Practical List:3
	 Pragram No    :2
	 Developed By :
		Soham Mandal, Shubham Kumar, Shivam Raj
	 Date:13-Nov-14
	  */
#include<iostream.h>
#include<conio.h>
	int Div2(int N)
	{
		if(N%2==0)
			return 1;
		else
			return 0;
	}
	int Div3(int N)
	{
		if(N%3==0)
			return 1;
		else
			return 0;
	}
void main()
	{
		clrscr();
		int N;
			cout<<"Enter N";
			cin>>N;
		if((Div2(N))&&(!Div3(N)))
			cout<<"Divisible by 2 \n";
		else if((!Div2(N))&&(Div3(N)))
			cout<<"Divisible by 3  \n";
		else if((Div3(N))&&(Div2(N)))
			cout<<"Divisible by 2 and 3 \n";
		else if((!Div3(N))&&(!Div2(N)))
			cout<<"Divisible by neither 3 nor 2 \n";
		getch();
}
//***************************************************************************
/* OUTPUT
Enter N10
Divisible by 2
****************************************************************************
*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
