/*
List 4
Program 5
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void Input(int [],int);
void Display(int [],int);
void MergeArray(int [],int [],int[],int,int,int&);
void main()
{
 int Boys[100],Girls[100],MH[200],n,m,k=0;
 clrscr();
 cout<<"Enter number of Boys"<<endl;
 cin>>n;
 cout<<"Enter Height"<<endl;
 Input(Boys,n);
 cout<<"Enter number of Girls"<<endl;
 cin>>m;
 cout<<"Enter Height"<<endl;
 Input(Girls,m);
 cout<<"Entire chart of Height"<<endl;
 MergeArray(Boys,Girls,MH,n,m,k);
 Display(MH,k);
 getch();
}
void Input(int A[],int n)
{
 for(int i=0;i<n;i++)
  cin>>A[i];
}
void Display(int A[],int n)
{
 for(int i=0;i<n;i++)
  cout<<A[i]<<endl;
}
void MergeArray(int A[],int B[],int C[],int n,int m,int &k)
{
 int i=n-1,j=m-1;
 while(i>=0 || j>=0)
 {
  if(A[i]>B[j])
   C[k++]=A[i--];
  else if(A[i]<B[j])
   C[k++]=B[j--];
  else
  {
   C[k++]=B[j--];
   i--;
  }
 }
 while(i>=0)
  C[k++]=A[i--];
 while(j>=0)
  C[k++]=B[j--];
}


/* OUTPUT
Enter number of Boys
4                                                                               
Enter Height                                                                    
167 171 179 183                                                                 
Enter number of Girls                                                           
3                                                                               
Enter Height                                                                    
150 159 167                                                                     
Entire chart of Height                                                          
183                                                                             
179                                                                             
171                                                                             
167                                                                             
159                                                                             
150
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
