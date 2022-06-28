#include <iostream>
#include <string>

using namespace std;

void greeting (string name, string prefix="Mr.", string suffix="");//only =

void greeting (string name,string prefix,string suffix){
    cout<<"Hello, "<<prefix<<" "<<name<<" "<<suffix<<endl;
}

int main(){
    string name{},gender{},prefix{},answer{},suffix{};//already initialised
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Gender m/f: ";
    cin>>gender;
    cout<<"Do you hold any postion? y/n: ";
    cin>>answer;
    if (answer=="y"){//c++string
        cout<<"Position: ";
        cin>>suffix;
    }
    
    
    if (gender=="f"){//c++ string
        prefix="Miss";
        
    }    
    
    greeting(name,prefix,suffix);
}
