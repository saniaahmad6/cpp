#ifndef _Accounts_h_
#define _Accounts_h_

#include <string>
#include <iostream>//cout,cin and endl
class Account{
    private:
        double balance=0;
        std::string name;
    public:
   
    void set_balance(int bal) {balance=bal;}
    double get_balance() {return balance;}

    void set_name(std::string x) ;
    std::string get_name();
    bool active(){if (balance != 0) return true;};//balance is a class member, no need to pass it in method 
    void holder(std::string talk) {std::cout<<name<<" speaks "<<talk<<std::endl;};
    bool deposit(double val) ;
    bool withdraw(double val) ;
};
#endif