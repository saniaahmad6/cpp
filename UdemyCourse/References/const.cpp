#include <bits/stdc++.h>
using namespace std;

void f(int &b){
    b=1000;
}



int main(){
    int var=10;
    f(var);
    cout<<var<<endl;
    int arr[]={1,2,3,4};
    for (const auto &i: arr){
        i=10;
    }
    for ( auto &i: arr){
        cout<<i<<endl;
    }
    return 0;
}