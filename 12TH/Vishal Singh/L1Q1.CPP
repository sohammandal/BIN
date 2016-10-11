/*
List 1 Program 1
Group 15
Developed by- Shaurya Malik, Vishal Singh
*/
#include<iostream.h>
#include<conio.h>
#include<dos.h>

long Ser1(int x,int n);
float Ser2(int u,int n);
long Ser3(int n);
void main()
{
 clrscr();
 int Exit=0;
 int x,u,n,choice;
 do
 {
  cout<<"Enter choice -1.For series 1 2. For series 2 3. For series 3 4. For exit"<<endl;
  cin>>choice;
  if(choice==1)
  {
   cout<<"Enter x and n"<<endl;
   cin>>x>>n;
   cout<<"Sum of Series 1 is "<<Ser1(x,n)<<endl;
  }
  else if(choice==2)
  {
   cout<<"Enter u and n"<<endl;
   cin>>u>>n;
   cout<<"Sum of Series 2 is "<<Ser2(u,n)<<endl;
  }
  else if(choice==3)
  {
   cout<<"Enter n"<<endl;
   cin>>n;
   cout<<"Sum of Series 3 is "<<Ser3(n)<<endl;
  }
  else if(choice==4)
   Exit=1;
  else
   cout<<"INVALID CHOICE!"<<endl;
 }while(!Exit);
 cout<<"THANK YOU!"<<endl;
 getch();
}
long Ser1(int x,int n)
{
 long Prod=1,Sum=0;
 for(int i=1;i<=n;i++)
 {
  Prod=Prod*x;
  Sum=Sum+Prod;
 }
 return Sum;
}
float Ser2(int u,int n)
{
 float term=1,Sum=0,fact=1,Num=1;
 for(int i=1;i<=n;i++)
 {
  fact=fact*i;
  Num=Num*u;
  term=Num/fact;
  Sum=Sum+term;
 }
 return Sum;
}
long Ser3(int n)
{
 long  Sum=0,term=0;
 for(int i=1;i<=n;i++)
 {
  term=term+(2*i);
  Sum=Sum+term;
 }
 return Sum;
}


/*OUTPUT
Enter choice -1.For series 1 2. For series 2 3. For series 3 4. For exit
1                                                                               
Enter x and n                                                                   
2 3                                                                             
Sum of Series 1 is 14                                                           
Enter choice -1.For series 1 2. For series 2 3. For series 3 4. For exit        
2                                                                               
Enter u and n                                                                   
1 3                                                                             
Sum of Series 2 is 1.666667                                                     
Enter choice -1.For series 1 2. For series 2 3. For series 3 4. For exit        
3                                                                               
Enter n
3                                                                               
Sum of Series 3 is 20                                                           
Enter choice -1.For series 1 2. For series 2 3. For series 3 4. For exit        
4                                                                               
THANK YOU!                                                                      

*/