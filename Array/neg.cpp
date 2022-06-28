#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(int);
    int last=size-1;
    for (int i=last;i>=0;i--){
        if (arr[i]<0){
            int temp=arr[i];
            int c=i;
            while (c!=last){
                arr[c]=arr[c+1];
                c++;
                
            }
            arr[last]=temp;
            last--;
        }
        
    
    }
    for (int i=0;i<n;i++){
                cout<<arr[i]<<" ";}
        
    return 0;
}