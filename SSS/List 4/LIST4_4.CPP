/*
List 4
Program 4
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void accept(int[],int);
void insertD(int[],int);
void Binsearch(int[],int);
void main()
{
 clrscr();
 int Scholarship[100],n;
 cout<<"Enter number of terms"<<endl;
 cin>>n;
 cout<<"Enter login id"<<endl;
 accept(Scholarship,n);
 insertD(Scholarship,n);
 Binsearch(Scholarship,n);
 getch();
}
void accept(int A[],int n)
{
 for(int i=0;i<n;i++)
  cin>>A[i];
}
void Binsearch(int A[],int n)
{
 int Found=0,SearchID,Mid;
  cout<<"Enter Value to be searched";
  cin>>SearchID;
  int LB=0,UB=n-1;
  while(LB<=UB && !Found)
  {
	Mid=(LB+UB)/2;
	if(A[Mid]==SearchID)
	 Found=1;
	else if(A[Mid]<SearchID)
	 UB=Mid-1;
	else if(A[Mid]>SearchID)
	 LB=Mid+1;
  }
  if(Found)
	cout<<"Value Found at "<<Mid<<endl;
  else
	cout<<"Not Found"<<endl;
  getch();
}
void insertD(int A[100],int n)
{
 for(int i=1;i<n;i++)
 {
  int Temp=A[i],j=i-1;
  while(Temp>A[j] && j>=0)
  {
	A[j+1]=A[j];
	j--;
  }
  A[j+1]=Temp;
 }
 for(int m=0;m<n;m++)
  cout<<A[m]<<endl;
}



/* OUTPUT
Enter number of terms
4                                                                               
Enter login id                                                                  
123 69 99 100                                                                   
123                                                                             
100                                                                             
99                                                                              
69                                                                              
Enter Value to be searched 69                                                   
Value Found at 3
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
