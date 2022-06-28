
#include <iostream>
#include <string>
#include <vector>
#include<iomanip>
using namespace std;

class Account{
    private:
        int code=0;
    public:
    //attributes
    string name="name";//initialise each objects of this class to have name =name
    int balance;
    //methods--- prototypes/definition
    bool active(){if (balance != 0) return true;};//balance is a class member, no need to pass it in method 
    void holder(string talk) {cout<<name<<" speaks "<<talk<<endl;};
    bool code_change(int codenew) {code=codenew; return true;};
};

int main(){
    Account sania;//has a name, balance
    sania.name="sania";
    sania.balance=100;
    cout<<boolalpha;
    cout<<sania.active()<<endl;
    cout<<noboolalpha;
    Account papa;
    Account arr[]={sania,papa};
    vector <Account> vec={sania};
    vec.push_back(papa);
    
    
    Account * heap_add=new Account;
    (*heap_add).balance=100;//*
   //error cout<<heap_add->code<<endl; cant access private class members
    cout<<heap_add->code_change(10)<<endl;//->
    cout<<(*heap_add).active()<<endl;
    delete heap_add;
    return 0;
}