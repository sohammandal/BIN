/*
List 4 Program 23
Group 11
Developed By: Soham Mandal, Shubham Kumar, Shivam Raj
*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct real
{
  float RealNo;
  real *ptr;
};

class Queue
{
	  real *rear,*front;

  public:
	  Queue(){rear=NULL;front=NULL;}
	  void Qinsert();
	  void Qdelete();
	  void Qdisplay();
	  ~Queue();
};

void Queue::Qinsert()
{
  real *temp;
  temp=new real;
  cout<<"Enter NO: ";
  cin>>temp->RealNo;
  temp->ptr=NULL;
  if(rear==NULL)
   {
     rear=temp;front=temp;
   }
  else
   {rear->ptr=temp;rear=temp;}
}

void Queue::Qdelete()
{
  if(front!=NULL)
  {
    real *temp=front;
    cout<<front->RealNo<<".....deleted\n";
    front=front->ptr;
    delete temp;
    if(front==NULL)
       rear=NULL;
  }

  else
    cout<<"QUEUE EMPTY\n";
}

void Queue::Qdisplay()
{
  if(front!=NULL)
  {
    real *temp=front;
    while(temp!=NULL)
      {
	cout<<temp->RealNo<<"  ";
	temp=temp->ptr;
      }
    cout<<"\n";
  }
  else
     cout<<"QUEUE EMPTY\n";
}

Queue::~Queue()
{
  while(front!=NULL)
  {
    real *temp=front;
    front=front->ptr;
    delete temp;
  }
}

void main()
{
  clrscr();
  Queue R;
  char ch;
  do
   {
     cout<<"1.Insert\n2.Delete\n3.Display\n4.Quit\nEnter your choice : ";
     cin>>ch;
     switch(ch)
     {
	case '1':R.Qinsert();
		 break;
	case '2':R.Qdelete();
		 break;
	case '3':R.Qdisplay();
		 break;
     }
   }while(ch!='4');
  getch();
}

/*============OUTPUT=================
1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 1
Enter NO: 2

1.Insert
2.Delete
3.Display
4.Quit
Enter your choice :1
Enter NO: 4

1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 3
2  4

1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 2

2.....deleted

1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 2

4.....deleted

1.Insert
2.Delete
3.Display
4.Quit
Enter your choice : 4
*/