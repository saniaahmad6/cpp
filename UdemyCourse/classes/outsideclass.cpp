#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
        double balance=0;
        string name;
    public:
   
    void set_balance(int bal) {balance=bal;}
    double get_balance() {return balance;}

    void set_name(string x) ;
    string get_name();
    bool active(){if (balance != 0) return true;};//balance is a class member, no need to pass it in method 
    void holder(string talk) {cout<<name<<" speaks "<<talk<<endl;};
    bool deposit(double val) ;
    bool withdraw(double val) ;
};

void Account::set_name(string x) {
    name=x;
}
string Account::get_name() 
{   return name;
}

bool Account::deposit(double val) {
    balance+=val; return true;
}

    
bool Account::withdraw(double val) {
    if (balance>=val){
    balance-=val; return true;
    }
    else return false;
}

int main(){
    Account sania_account;
    //set and get
    sania_account.set_name("Sania Ahmad");
    cout<<sania_account.get_name()<<endl;
    sania_account.set_balance(1000);
    cout<<sania_account.get_balance()<<endl;
    //deposit
    if(sania_account.deposit(1000)){
        cout<<"deposit done"<<endl;
    }
    else{cout<<"deposit not done"<<endl;}
    cout<<sania_account.get_balance()<<endl;

    //withdraw success
    if(sania_account.withdraw(500)){
        cout<<"withdrawal done"<<endl;
    }
    else{cout<<"withdrawal nnot done"<<endl;}
    cout<<sania_account.get_balance()<<endl;

    //withdraw fail
    if(sania_account.withdraw(1000000)){
        cout<<"withdrawal done"<<endl;
    }
    else{cout<<"withdrawal not done"<<endl;}
    cout<<sania_account.get_balance()<<endl;
    return 0;
}