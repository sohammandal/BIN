/* List 4
Program 1
Group 14
Name- Varun , Vinayak , Vishal
*/
#include<iostream.h>
#include<conio.h>
float MaxMarks(float[],int);
float MinMarks(float[],int);
void main()
{
 clrscr();
 int n;
 float Marks[100];
 cout<<"Enter number of students (max 100)"<<endl;
 cin>>n;
 cout<<"Enter Marks"<<endl;
 for(int i=0;i<n;i++)
  cin>>Marks[i];
 cout<<"Highest "<<MaxMarks(Marks,n)<<endl;
 cout<<"Lowest "<<MinMarks(Marks,n)<<endl;
 getch();
}
float MaxMarks(float A[100],int n)
{
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-i-1;j++)
	if(A[j]>A[j+1])
	{
	 int T=A[j];
	 A[j]=A[j+1];
	 A[j+1]=T;
	}
  }
  return A[n-1];
}
float MinMarks(float A[100],int n)
{
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-i-1;j++)
	if(A[j]>A[j+1])
	{
	 int T=A[j];
	 A[j]=A[j+1];
	 A[j+1]=T;
	}
  }
  return A[0];
}



/* OUTPUT
Enter number of students (max 100)
99 69 100 85
Highest 100
Lowest 69
*/

