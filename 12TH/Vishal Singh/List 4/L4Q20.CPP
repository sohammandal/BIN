/*
List 4 Program 20
Group 11
Developed By: Soham Mandal, Shubham Kumar, Shivam Raj
*/

#include<iostream.h>
#include<conio.h>

const int max=10;

void push(int N[], int &t)
{
  if(t<(max-1))
    {
      t++;
      cout<<"Data: "; cin>>N[t];
    }
  else
    cout<<"Stack Full..\n";
}

void pop(int N[], int &t)
{
  if(t!=-1)
  {
    cout<<N[t]<<"..deleted\n";
    t--;
  }
  else
    cout<<"Stack is Empty!\n";
}

void disp(int N[], int t)
{
  for(int i=t; i>=0; i--)
    cout<<N[i]<<"  ";
  cout<<endl;
}

void main()
{
  clrscr();
  int N[max], top=-1;
  char ch;
  do
   {
     cout<<"\n1.Push\n2.Pop\n3.Display\n4.Quit\n";
     cin>>ch;
     switch(ch)
     {
	case '1':push(N,top);
		 break;
	case '2':pop(N,top);
		 break;
	case '3':disp(N,top);
		 break;
     }
   }while(ch!='4');
  getch();
}




/*==============OUTPUT================

1.Push
2.Pop
3.Display
4.Quit
1
Data: 3

1.Push
2.Pop
3.Display
4.Quit
1
Data: 4
 
1.Push
2.Pop
3.Display
4.Quit
2
4..deleted

1.Push
2.Pop
3.Display
4.Quit
2
3..deleted

1.Push
2.Pop
3.Display
4.Quit
2
Stack is Empty!

1.Push
2.Pop
3.Display
4.Quit
4

*/