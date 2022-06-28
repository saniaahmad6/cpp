#include <bits/stdc++.h>

using namespace std;

void soe(int n){
    vector <int> v(n+1,1);//0 -  n
    for (int i=2;i*i<=n;i++){
        for (int j=i*i;j<=n;j+=i){
            if (v[j]==1){
                v[j]=0;
            }
        }
    }
    for (int i=2;i<=n;i++){
        if (v[i]==1)  cout<<i<<endl;
    }
}



int main(){
    int n;
    cin>>n;
    soe(n);
    return 0;
}