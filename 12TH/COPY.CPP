#include<fstream.h>
#include<conio.h>
void encrypt();
void decrypt();
char pass[4]={'b','a','d','e'};
void main()
{
 encrypt();
}
void encrypt()
{
 int i=0;
 ifstream input("txt.txt");
 ofstream output("enctxt.txt");
 char inp;
 while(!input.eof())
 {
  input.get(inp);
  int op=inp+pass[i];
  output<<(char)op;
  i++;
  if(i==4)i=0;
 }
 input.close();
 output.close();
}
void decrypt()
{
 ofstream decode("dectxt.txt");
 ifstream enc("enctxt.txt");
 char rd;
 int r=0;
 while(!enc.eof())
 {
  enc.get(rd);
  int up=rd-pass[r];
  decode<<(char)up;
  r++;
  if(r==3)r=0;
 }
 decode.close();
 enc.close();
}

