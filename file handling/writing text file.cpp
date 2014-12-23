/*program to write a file in main memory(RAM) here ofstream is output stream i.e. it takes the info out from stream to main memory.. */


#include<iostream>
#include<fstream.h>
using namespace std;
int main()
{
 char name[20],city[20]; int age;   
 ofstream fout("chitra.txt");
 if(fout.good()!=1)
 {
   cout<<"\n file cannot be opened";
   exit(0);                  
 }
 cout<<"enter name: ";
 cin>>name;
 cout<<"\n enter city: ";
 cin>>city;
 cout<<"\nenter age: ";
 cin>>age;
 fout<<name<<endl<<city<<endl<<age;
 cout<<"\nfile created";
 fout.close();
 system("pause");
return 0;    
}
