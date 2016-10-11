void deletestudent()
{
 clrscr();
 fstream f1, f2;
 student s;
 int admiss;
 f1.open("student.dat",ios::binary | ios::in);
 f2.open("temp.dat",ios::binary | ios::out);
 cout<<"\nEnter Admno of student to be deleted: \n";
 cin>>admiss;
 int del=0;
 while (f1.read((char*)&s,sizeof(s)))
  {
  if (s.giveadmno()==admiss)
   f2.write((char*)&s,sizeof(s));
  else
   del++;
  }
 if(!del)
  cout<<"\nStudent not found...\n";
  else
  cout<<"\nDeleted...\n";
 f1.close();
 f2.close();
 remove("student.dat");
 rename("temp.dat","student.dat");
}
