/*program to read file using input stream i.e. it will take input from main memory to stream */
#include<iostream>
#include<fstream.h>
using namespace std;
int main()
{
    char name[20],city[20];int age;
 ifstream fin("chitra.txt");
 if(!fin.good())    
    {
      cout<<"cannot open file!!";
      exit(0);                
    }
    fin>>name;
    cout<<name<<"\n";
    fin>>city;
    cout<<city<<"\n";
    fin>>age;
    cout<<age<<"\n";
    system("pause");
    return 0;
}
