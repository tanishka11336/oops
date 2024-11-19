#include<iostream>
using namespace std;
int n;
class bank{
public:
    int accountno,amount;
    string name;
  public:
     void accept();
     void display();
     void withdraw();
     void deposit();  
      
  bank(){
    accountno=0;
    amount=0;
    name="bank";
}
}b[100];

void bank :: accept(){
cout<<"\n"<<"enter the account no\n"<<"enter the amount\n"<<"enter name\n";
cin>>accountno>>amount>>name;
}
void bank::display(){  
    cout<<"accountno\tamount\t\tname"<<"\n";
   for(int i=0;i<n;i++)
   { 
    cout<<b[i].accountno<<"\t\t"<<b[i].amount<<"\t\t"<<b[i].name<<"\n";
   }
    
}
void bank::withdraw(){
    int i;
    int acc,withd,f=0;
        cout<<"enter the amount you want to withdraw";
        cin>>withd;
        if(withd<=amount)
        {
        amount-=withd;
         
        }
        else{
            cout<<"amount is not available";
        }
        
    }
void bank::deposit(){
    int depo;
        cout<<"enter how many you want to insert";
        cin>>depo;
        amount=amount+depo;
    }  
int main(){
    
    int ch;
    do{
    cout<<"menu"<<endl;
    cout<<"accept"<<"\n"<<"diplsay"<<"\n"<<"withdraw"<<"\n"<<"deposit"<<"\n"<<"exit";
    cout<<"enter your choice\n";
    cin>>ch;
    switch(ch){
case 1:cout<<"enter how many records you want to insert";
    cin>>n;
      for(int i=0;i<n;i++)
      {
        b[i].accept();
      }
      break;
 case 2: int i;
 b[i].display();
 break;
 case 3:int acc;
cout<<"enter the account no";
    cin>>acc;
    for(int i=0;i<n;i++)
    {
    if(b[i].accountno==acc){    
    b[i].withdraw();
 }
    }
 break;
 case 4: int accno;
 cout<<"enter the accont no";
 cin>>accno;
for (int i = 0; i < n; i++)
{
    if(b[i].accountno==accno){
     b[i].deposit();
    }
}
break;
case 5:cout<<"exit loop";
default:cout<<"returning from loop";
    }
    }
    while(ch!=5);
}
