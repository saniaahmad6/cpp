#include <iostream>
#include <vector>
using namespace std;



int fib(int n){
    static vector <int> v(n,-1);
    if (n<=1){
        v[n]=n;
        return n;
    } 
    else{
        if (v[n-1]==-1) v[n-1]=fib(n-1);
        if (v[n-2]==-1) v[n-2]=fib(n-2);
        v[n]=v[n-1]+v[n-2];
        return v.at(n-1)+v.at(n-2);

    }


}


int main(){
    cout<<fib(4);
    return 0;

}