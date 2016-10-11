/*
List 3 Program 13
Group 11
Developed by- Soham Mandal, Shivam Raj, Shubham Kumar
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class BOOK
{
 int Bno;
 char Bname[20];
 char Author[20];
 float Price;
 public:
 void Enter()
 {
  cout<<"Book no.-";cin>>Bno;
  cout<<"Book name-";gets(Bname);
  cout<<"Author-";gets(Author);
  cout<<"Price-";cin>>Price;
 }
 void Display()
 {
  cout<<"Book no.-"<<Bno<<endl;
  cout<<"Book name-"<<Bname<<endl;
  cout<<"Author-"<<Author<<endl;
  cout<<"Price-"<<Price<<endl;
 }
 int RBno()
 {
  return Bno;
 }
 char* RBname()
 {
  return Bname;
 }
};
void Enter(BOOK A[100],int n);
void Display(BOOK A[100],int n);
void SearchN(BOOK A[100],int n);
void SearchNm(BOOK A[100],int n);
void main()
{
 clrscr();
 BOOK A[100];int n,choice,exit=0;
 cout<<"Enter number of books-"; cin>>n;
 do
 {
  cout<<"Enter choice-1.Enter 2.Display 3.Search By Number 4.Search By Name 5.Exit\n";
  cin>>choice;
  if(choice==1)
   Enter(A,n);
  else if(choice==2)
   Display(A,n);
  else if(choice==3)
   SearchN(A,n);
  else if(choice==4)
   SearchNm(A,n);
  else
   exit++;
 }while(!exit);
 cout<<"Thanks a lot!"<<endl;
 getch();
}
void Enter(BOOK A[100],int n)
{
 for(int i=0;i<n;i++)
  A[i].Enter();
}
void Display(BOOK A[100],int n)
{
 for(int i=0;i<n;i++)
  A[i].Display();
}
void SearchN(BOOK A[100],int n)
{
 int no,found=0,i=0;
 cout<<"Enter book number to be searched-"; cin>>no;
 while(!found && i<n)
 {
  if(A[i].RBno()==no)
   found++;
  else
   i++;
 }
 if(found)
  A[i].Display();
 else
  cout<<"NOT FOUND!"<<endl;
}
void SearchNm(BOOK A[100],int n)
{
 int found=0,i=0;
 char Name[20];
 cout<<"Enter book name to be searched-"; gets(Name);
 while(!found && i<n)
 {
  if(strcmpi(A[i].RBname(),Name)==0)
   found++;
  else
   i++;
 }
 if(found)
  A[i].Display();
 else
  cout<<"NOT FOUND!"<<endl;
}
/************OUTPUT********************
Enter number of books-2
Enter choice-1.Enter 2.Display 3.Search By Number 4.Search By Name 5.Exit
1
Book name-Alchemist
Author-Paulo Coelho                                                             
Price-100                                                                     
Book no.-23                                                                    
Book name-President
Author-Richard Nixon                                                              
Price-50
Book no.-10                                                                    
Enter choice-1.Enter 2.Display 3.Search By Number 4.Search By Name 5.Exit       
3                                                                               
Enter book number to be searched-23                                            
Book no.-23                                                                  
Book name-Alchemist                                                      
Author-Paulo Coelho                                                              
Price-100                                                                  
Enter choice-1.Enter 2.Display 3.Search By Number 4.Search By Name 5.Exit       
4                                                                               
Enter book name to be searched-President                                          
Book no.-10                                                                    
Book name-President                                                                 
Author-Richard Nixon                                                             
Price-50                                                                      
Enter choice-1.Enter 2.Display 3.Search By Number 4.Search By Name 5.Exit       
5                                                                               
Thanks a lot!                                                                     
*/