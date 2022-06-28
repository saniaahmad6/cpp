#include <string>
#include "Accounts.h"/////must

void Account::set_name(std::string x) {
    name=x;
}
std::string Account::get_name() 
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