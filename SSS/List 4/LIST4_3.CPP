/*
List 4
Program 3
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void Input(long[],int);
void Search(long[],int);
void main()
{
 clrscr();
 long RollNo[100]; int n;
 cout<<"Enter number of elements"<<endl;
 cin>>n;
 Input(RollNo,n);
 Search(RollNo,n);
 getch();
}
void Input(long A[100],int n)
{
 cout<<"Enter Values"<<endl;
 for(int i=0;i<n;i++)
  cin>>A[i];
}
void Search(long A[100],int n)
{
 int SearchRno;
 cout<<"Enter value to be searched"<<endl;
 cin>>SearchRno;
 int Found=0;
 int i=0;
 while(!Found && i<n)
 {
  if(A[i]==SearchRno)
   Found++;
  else
   i++;
  }
 if(Found)
 cout<<"Value is at "<<i+1<<" position"<<endl;
 else
 cout<<"Not Appearing in Exam"<<endl;
}



/* OUTPUT
Enter number of elements
4                                                                               
Enter Values                                                                    
1111 71198 23698 191198                                                         
Enter value to be searched                                                      
23698                                                                           
Value is at 3 position
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
