/*
List 4
Program 2
Group 14
Members- Varun, Vinayak, Vishal
*/
#include<iostream.h>
#include<conio.h>
void Bubble(int[],int);
void Select(int[],int);
void Insert(int[],int);
void Disp(int[],int);
void main()
{
 clrscr();
 int n,BirthYear[100];
 cout<<"Enter number of students (Max 100)"<<endl;
 cin>>n;
 cout<<"Enter DOB"<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>BirthYear[i];
  if(BirthYear[i]<1000 || BirthYear[i]>9999)
  {
	cout<<"Enter Proper DOB (4 digits)"<<endl;
	cin>>BirthYear[i];
  }
 }
 int exit=0;
 char Ch;
 do
 {
  cout<<"1. Bubble Sort(Asc), 2. Selection Sort(Desc), 3. Insertion Sort(Asc) 4.Display 5. Exit"<<endl;
  cin>>Ch;
  if(Ch=='1')
	Bubble(BirthYear,n);
  else if(Ch=='2')
	Select(BirthYear,n);
  else if(Ch=='3')
	Insert(BirthYear,n);
  else if(Ch=='4')
	Disp(BirthYear,n);
  else if(Ch=='5')
	exit=1;
 }while(exit==0);
 cout<<"Thank you"<<endl;
 getch();
}
void Bubble(int Birth[100],int n)
{
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-i-1;j++)
  {
	if(Birth[j]>Birth[j+1])
	{
	 int T=Birth[j];
	 Birth[j]=Birth[j+1];
	 Birth[j+1]=T;
	}
  }
 }
 for(int m=0;m<n;m++)
  cout<<Birth[m]<<endl;
}
void Select(int Birth[100],int n)
{
 for(int i=0;i<n-1;i++)
 {
  int Big=i;
  for(int j=i+1;j<n;j++)
	if(Birth[Big]<Birth[j])
	 Big=j;
  if(Big!=i)
  {
	int T=Birth[Big];
	Birth[Big]=Birth[i];
	Birth[i]=T;
  }
 }
 for(int m=0;m<n;m++)
  cout<<Birth[m]<<endl;
}
void Insert(int Birth[100],int n)
{
 for(int i=1;i<n;i++)
 {
  int Temp=Birth[i],j=i-1;
  while(Temp<Birth[j] && j>=0)
  {
	Birth[j+1]=Birth[j];
	j--;
  }
  Birth[j+1]=Temp;
 }
 for(int m=0;m<n;m++)
  cout<<Birth[m]<<endl;
}
void Disp(int Birth[100],int n)
{
 for(int m=0;m<n;m++)
  cout<<Birth[m]<<endl;
}



/* OUTPUT
Enter DOB
1998 2001 1997                                                                  
1. Bubble Sort(Asc), 2. Selection Sort(Desc), 3. Insertion Sort(Asc) 4.Display 5
. Exit                                                                          
1                                                                               
1997                                                                            
1998                                                                            
2001                                                                            
1. Bubble Sort(Asc), 2. Selection Sort(Desc), 3. Insertion Sort(Asc) 4.Display 5
. Exit                                                                          
2                                                                               
2001                                                                            
1998                                                                            
1997                                                                            
1. Bubble Sort(Asc), 2. Selection Sort(Desc), 3. Insertion Sort(Asc) 4.Display 5
. Exit                                                                          
3                                                                               
1997                                                                            
1998                                                                            
2001                                                                            
1. Bubble Sort(Asc), 2. Selection Sort(Desc), 3. Insertion Sort(Asc) 4.Display 5
. Exit                                                                          
5                                                                               
Thank you
*/
                                                                                

