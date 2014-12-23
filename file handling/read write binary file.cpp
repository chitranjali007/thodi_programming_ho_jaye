/*writing and reading a binary file*/
#include<iostream>
#include<fstream.h>
using namespace std;
class person
{
  char name[20];
  int age;
  public:
         void getdata()
         {
         cout<<"enter name: ";
         cin>>name;
         cout<<"\nenter age: ";
         cin>>age;     
         }      
      void show()
      {
       cout<<name<<" "<<age;     
      }
};
int main()
{
   person p;int i;
   fstream file;
   file.open("sudha.txt",ios::in|ios::out|ios::binary);
   if(file.good()!=1)
   {
     cout<<"\nfile cant be created";
            
   }
  // for(i=1;i<=5;i++)
   //{ cout<<"for person"<<i<<": \n";
   p.getdata();
   file.write((char *)&p,sizeof(p));
  //}
  //for(i=1;i<=5;i++)
  //{
   cout<<"Reading person"<<i<<": \n";
   file.read((char *)&p,sizeof(p));
   p.show();                  
  //}
  
    
system("pause");
return 0;    
}
