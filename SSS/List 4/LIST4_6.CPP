/*
List 4
Program 6
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void accept(int[],int);
void Delete(int[],int);
void Display(int[],int);
void main()
{
 clrscr();
 int A[100],n;
 cout<<"Enter number of terms"<<endl;
 cin>>n;
 cout<<"Enter values"<<endl;
 accept(A,n);
 Delete(A,n);
 getch();
}
void accept(int A[],int n)
{
 for(int i=0;i<n;i++)
  cin>>A[i];
}
void Delete(int A[],int n)
{
 int k;
 cout<<"Number to be deleted"<<endl;
 cin>>k;
 int i=0,found=0;
 while(!found && i<n)
 {
  if(A[i]==k)
   found++;
  else
   i++;
  }
 if(found)
 {
  while(i<n-1)
  {
   A[i]=A[i+1];
   i++;
  }
  Display(A,n-1);
 }
 else
 cout<<"Value not found"<<endl;
}
void Display(int A[],int n)
{
 for(int i=0;i<n;i++)
  cout<<A[i]<<"  ";
}



/* OUTPUT
Enter number of terms
4
Enter values
1998 2001 2048 7110
Number to be deleted
2001
1998  2048  7110
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
