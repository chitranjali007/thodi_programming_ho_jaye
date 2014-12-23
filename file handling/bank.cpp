#include<iostream.h>
 #include<fstream.h> 
 #include<string.h> 
 using namespace std;
  int main() 
  { ofstream myfile;
   char ch; 
   //char name[20], phone[11], address[50], line[100];
    string name, phone, address, line;
     int amount,acc=0;
      while(1)
       { cout<<"bank simulator \n1.create account \n2.remove account \n3.deposit \n4.withdraw \n5.view \n6.exit \n";
         cin>>ch;
         switch(ch)
          { case '1' : cout<<"\nPlease enter name :";
                       cin>>name; 
           //getline(cin,name); 
                       cout<<"phone :"; 
                       cin>>phone; //getline(cin,phone);
                       cout<<"address :";
                       cin>>address; //getline(cin,address);
                       cout<<"amount :"; 
                       cin>>amount; 
                       myfile.open("bank.txt",ios::app); 
                       myfile<<name<<","<<phone<<","<<address<<","<<amount<<"\n";
                      
                       myfile.close(); 
                       //cout<<name<<","<<phone<<","<<address<<","<<amount<<"\n";
                      cout<<"\naccount created successfully!!!! Your account no. is :"<<acc<<"\n";
                       break; 
                 case '2' : cout<<"\nPlease enter name :";
                            cin>>name; 
                            int ac_no;
                           
                            ifstream myfilex; 
                            ofstream myfilez; 
                            myfilex.open("bank.txt");
                             myfilez.open("xyz.txt");
                              if (myfilex.is_open())
                               { while ( !myfilex.eof())
                                { getline (myfilex,line); 
                                string delimiter = ","; 
                                string token = line.substr(0, line.find(delimiter)); 
                                //cout << token << endl; 
                                if (token.compare(name) != 0)
                                 {myfilez<<line<<"\n";}
                                  } 
                                 myfilex.close();
                                  myfilez.close();
                                   remove("bank.txt"); 
                                   rename("xyz.txt","bank.txt");
                                    } 
                                    break; 
                                    // case '6' : exit(1); 
                            } 
                 } 
                                    system("pause"); 
                                     return 0;
                                     
                                     }
                   
