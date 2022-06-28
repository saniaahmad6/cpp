#include <bits/stdc++.h>
using namespace std;

#include "mystring.cpp"

int main(){
    mystring empty;
    mystring larry{"string"};
    mystring wow{larry};

    empty.display();
    larry.display();
    wow.display();
    empty=larry;
    empty.display(); 
    empty={"hello"};// overloaded constructor creates a temp object, then moving assignment (already created object)
    empty.display();

    cout<<" ---"<<endl;
    vector <mystring>v;
    v.push_back({"sania"});// overloaded constructor creates a temp object, then moving assignment (already created object)
    for (auto &i: v){
        i.display();
    }
    mystring name1{"HELLO"};
    mystring name2{"bye"};
    mystring cat;
    cat=name1+name2;
    cat.display();
    mystring neg;
    neg=-name1;
    neg.display();
    cout<<(name1==name2)<<endl;
    return 0;
}
