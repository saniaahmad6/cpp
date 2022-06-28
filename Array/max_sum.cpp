#include <iostream>

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=INT_MIN,curr=0,prev=INT_MIN;

    for (int i=0;i<n;i++){
        curr+=arr[i];
        if (curr>maxsum){
            maxsum=curr;
        }
        else if (curr<prev) prev=arr[i];
    }
    cout<<maxsum<<endl;
    return 0;
}