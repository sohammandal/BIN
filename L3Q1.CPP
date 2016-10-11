#include<conio.h>
#include<iostream.h>
#include<stdio.h>
class BOOK
{
 int Bno;
 char Bname[20], Author[20];
 float price;
 public:
 void enter();
 void display();
 int RBno();
 char RBname90;
};
void BOOK::enter()
{
 cout<<"Enter Book No: ";cin>>Bno;
 cout<<"\nEnter Book Name: ";gets(Bname);
 cout<<"\nEnter name of Author: ";gets(Author);
 cout

