/*
List 2 Program 4
Developed By-Shivam Raj , Shubham Kumar , Soham Mandal .
Class-12 K Group 11
*/
#include<iostream.h>
#include<conio.h>

struct Flight
{
 int Flno;
 char DepTime[20];
 char ArrTime[20];
 float Fare;
};
void Enter(Flight N[100],int n);
void DispDetails(Flight N[100],int n);
void LowestFare(Flight N[100],int n);
void main()
{
 clrscr();
 Flight N[100];
 int n;
 char Opt;
 cout<<"Enter No. of flights:";
 cin>>n;
 do
 {
  cout<<"Enter choice 1.Enter Values 2.Display Details 3.Lowest Fare 4.Exit \n";
  cin>>Opt;
  switch(Opt)
  {
   case '1':Enter(N,n);
   break;
   case '2':DispDetails(N,n);
   break;
   case '3':LowestFare(N,n);
   break;
  }
 }while(Opt!='4');
getch();
}

void Enter(Flight N[100],int n)
{
  for(int i=0;i<n;i++)
  {
   cout<<"Enter the flight no.:";
   cin>>N[i].Flno;
   cout<<"Enter Departure time:";
   cin>>N[i].DepTime;
   cout<<"Enter Arrival Time:";
   cin>>N[i].ArrTime;
   cout<<"Enter Fare:";
   cin>>N[i].Fare;
  }
}

void DispDetails(Flight N[100],int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<"Flight No.:"<<N[i].Flno<<endl;
  cout<<"Departure Time:"<<N[i].DepTime<<endl;
  cout<<"Arrival Time:"<<N[i].ArrTime<<endl;
  cout<<"Fare:"<<N[i].Fare<<endl;
 }
}
void LowestFare(Flight N[100],int n)
{
 float Lowest=N[0].Fare;
 for(int i=1;i<n;i++)
 {
  if(N[i].Fare<Lowest)
   Lowest=N[i].Fare;
 }
 cout<<"Lowest Fare is "<<Lowest<<endl;
}

/********OUTPUT*********
Enter No. of flights:2
Enter choice 1.Enter Values 2.Display Details 3.Lowest Fare 4.Exit
1
Enter the flight no.:12
Enter Departure time:1200
Enter Arrival Time:1330
Enter Fare:29000
Enter the flight no.:100
Enter Departure time:1200
Enter Arrival Time:1330
Enter Fare:26000
Enter choice 1.Enter Values 2.Display Details 3.Lowest Fare 4.Exit
3
Lowest Fare is 26000
Enter choice 1.Enter Values 2.Display Details 3.Lowest Fare 4.Exit
4
*/







