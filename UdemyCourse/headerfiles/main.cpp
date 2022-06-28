#include <iostream>
#include "Accounts.cpp"//must
using namespace std;
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