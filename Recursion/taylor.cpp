#include <bits/stdc++.h>
using namespace std;

double taylor(int x,int n){
    static double p=1,f=1;
    double r;
    if (n==0) return 1;
    else {
        r=taylor(x,n-1);//call in ascending
        //return in descending
        p*=x;
        f*=n;
        return r + p/f;
    }    
}


int main(){
    cout<<taylor(3,10)<<endl;
    return 0;
}