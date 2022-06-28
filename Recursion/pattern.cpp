#include <iostream>

using namespace std;

int main(){
    int k,n=6;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i==1 || i==n){
                cout<<"*"<<" ";
            }
            else if (i<=(n/2+1)) {
                if (i==j)
                cout<<"*";
                else 
                cout<<" ";
            }
            else if (j<=(n/2+1)){
                if (i+j==n+1)
                cout<<"*";
                else 
                cout<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}