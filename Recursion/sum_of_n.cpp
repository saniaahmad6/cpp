#include <bits/stdc++.h>
using namespace std;

int sumofn(int n){
    if (n==1) return n;
    else return sumofn(n-1) +n;
}
int main(){
    cout<<sumofn(5)<<endl;

    return 0;
}