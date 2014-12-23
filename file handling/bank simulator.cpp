#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int acc=0;
class bank
{
  char name[40];
  char address[60];
  int phone; 
  double amount;
  int account;
  public:
          void setName(char *nm)
  {
    strcpy(name,nm);      
  }
       void setAdd(char *nm)
  {
    strcpy(address,nm);       
  }
       void setPhone(int nm)
  {
    phone=nm;       
  }
      void setAmount(double nm)
  {
    amount=nm;       
  }
  void setAcc(int nm)
  {
    account=nm;       
  }
  void show()
  {
    cout<<"\n Name: "<<name;
    cout<<"\n Address: "<<address;
    cout<<"\n Phone Number: "<<phone;
    cout<<"\n Amount: "<<amount;
    cout<<"\n Account number: "<<account;
             
  }
  char* getName()
  {
    return name;        
  }
    char* getAddress()
  {
    return address;        
  }        
   int getPhone()
  {
    return phone;        
  }
   double getAmount()
  {
    return amount;        
  }
   int getAccount()
  {
    return account;        
  }
      
}bk,bk1;
void create_acc()
{

 char name[40],address[60];
  int phone; 
  double amount;
  
 
   cout<<"Enter Your Name:";
   cin>>name;
   bk.setName(name);
   
   cout<<"Enter Your Address: ";
 cin>>address;
 bk.setAdd(address);
  
  cout<<"Enter Your Phone number: ";
  cin>>phone;
  bk.setPhone(phone);
  
  cout<<"\nEntre Amount: ";
  cin>>amount;
  bk.setAmount(amount);
  
   bk.setAcc(++acc);
   cout<<"\n Your account num is: "<<acc;
  ofstream outfile("bank1.txt",ios::ate|ios::binary); 
  outfile.write(reinterpret_cast<char*>(&bk), sizeof(bk));
  outfile.close();  

      
     
}
void show_data()
{
       
        ifstream infile("bank1.txt",ios::in); 	
        
        while(!infile.eof())
        {
            infile.read( reinterpret_cast<char*>(&bk1), sizeof(bk1) );
            bk1.show();                
        }

}
void remove()
{
    cout<<"enter the account number that you wanna delete: ";
    int ac;
    cin>>ac;
    ofstream fout("temp.txt",ios::in);
    ifstream fin ("bank1.txt",ios::out);
    fin.read( reinterpret_cast<char*>(&bk), sizeof(bk) );
    int flag=0;
    while(!fin.eof())
    {
      if(bk.getAccount()==ac)
      { flag=1;
        bk.show();
        cout<<"are you sure you wanna delete this(y/n): ";
        char c;
        cin>>c;
        if(c=='n')
        fout.write(reinterpret_cast<char*>(&bk), sizeof(bk));
                          
      }                 
      else
        fout.write(reinterpret_cast<char*>(&bk), sizeof(bk));
    }
       if(flag==0)
       cout<<"\nfile not found!!!!\n";
       fin.close();
       fout.close();
       remove("bank1.txt");
       rename("temp.txt","bank1.txt");
}
int main()
{
  while(1)
  { 
//   clrscr();
   int ch;
   cout<<"\n ENTER YOUR CHOICE: ";
   cout<<"\n1. Creat Account"; 
   cout<<"\n2. Remove Account"; 
   cout<<"\n3. Deposite"; 
   cout<<"\n4. Withdraw"; 
   cout<<"\n5. View"; 
   cout<<"\n6. View All"; 
   cout<<"\n7. Exit\n";  
   cin>>ch;
   switch(ch)
              {
               case 1: create_acc();
                       break;
               case 2: remove();
                       break;
               case 3:
                      break;
               case 4:
                      break;
               case 5:
                      break;
               case 6: show_data();
                      break;
               case 7:  exit(0);
                  
               default:
                       break;
                             
                       
              }       
  }
  
system("pause");
return 0;    
}
