#include <bits/stdc++.h>
using namespace std;

int fn(int n,int p){
    if (p==1) return n;
    else return fn(n,p-1)*n;
}

//optimised power

int pfn(int n,int p){
    if (n==0) return 1;
    if (p%2==0){
       return pfn(n*n,p/2); 
    }else {
        return pfn(n*n,p/2)*n;
    }

}
int main(){
    cout<<pfn(2,5)<<endl;

    //optimised power iterative
    int n=6,p=2,ans=1;
    while (p>1){
        if (p%2==0) {ans*=(n*n); p/=2;}
        else {ans*=(n*n*n); p/=2;}
    }
    cout<<ans<<endl;
    return 0;
}