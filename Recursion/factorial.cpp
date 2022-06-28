#include <bits/stdc++.h>
using namespace std;

int fn(int n){
    if (n<=1) return 1;
    else return fn(n-1)*n;
}


int main(){
    cout<<fn(5)<<endl;

    return 0;
}