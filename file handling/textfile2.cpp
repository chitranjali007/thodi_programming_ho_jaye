#include<iostream>
#include<fstream.h>
using namespace std;
int main()
{
 char name[20],city[20],ch; int age;   
 ofstream fout("chitra.txt");
 if(fout.good()!=1)
 {
   cout<<"\n file cannot be opened";
   exit(0);                  
 }
 do
 {
 cout<<"enter name: ";
 cin>>name;
 cout<<"\n enter city: ";
 cin>>city;
 cout<<"\nenter age: ";
 cin>>age;
 fout<<name<<endl<<city<<endl<<age<<endl;
cout<<"\nwant more(y/n): ";
cin>>ch;
}while(ch!='n');
 cout<<"\nfile created";
 fout.close();
 system("pause");
return 0;    
}
