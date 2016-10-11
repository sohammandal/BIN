/* 
  List 3 Program 7
  Developed by: Soham Mandal, SHubham Kumar, Shivam Raj
*/  
#include<iostream.h>
#include<conio.h>
int lcm(int n,int m)
{
 int big;
 big=(n>m)?n:m;
 while ((big%n)!==0 || (big%m)!=0)
 big++;
 return big;
}
void main()
{
 clrscr();
 cout<<"Enter the numbers: \n";
 cin>>n1>>n2>>n3;

