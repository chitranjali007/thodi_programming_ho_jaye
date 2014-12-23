/*program to copy items from chitra to sudeep
first create file of name sudeep and then read data from chitra and write it on sudeep*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     char ch;
  ofstream fout("sudeep.txt");
  ifstream fin("chitra.txt");
  if(!fin.good())    
    {
      cout<<"cannot open file!!";
      exit(0);                
    }
     if(!fout.good())    
    {
      cout<<"cannot open file!!";
      exit(0);                
    }
    fin>>ch;
    while(!fin.eof())
    {
      fout<<ch;
      fin>>ch;               
    }
    cout<<"\nfile copied...";
    fout.close();
    fin.close();
  
system("pause");
return 0;    
}
