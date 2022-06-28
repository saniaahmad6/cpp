
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int index=0,ele=0;
    if (arr[0]>arr[1])
    index=0; ele=arr[0];
    for (int i=1;i<n-1;i++){
        
        if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1]) {
            index=i;ele=arr[i];
            goto end;
        }
          
    }
    index=n-1;
    end:;
    cout<<index<<endl;
    return 0;

}