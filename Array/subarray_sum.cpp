#include <iostream>
#include <vector>
using namespace std;
// class solution{
//         public:
//         vector<int> subarraySum(int arr[], int n, long long s){
//         vector <int> v;
//         long long curr=arr[0];
//         int start=0;
//         for (int i=1;i<n;i++){
//             while (curr>s &&  start<i-1){
//                 curr-=arr[start];
//                 start++;
//             }
//             if (curr==s){
//                 v.push_back(start+1);
//                 v.push_back(i);
//                 return v;
//             }
//             if (i<n){
//                 curr+=arr[i];
//             }

//         }
//         v.push_back(-1);
//         return v;
//         }

// };
int main(){
    int t,s;
    cin>>t>>s;
    int arr[t];
    vector <int> v;
    for (int i=0;i<t;i++){
        cin>>arr[i];
    }
    int curr=0,start=0;
    bool flag=false;
    for (int i=0;i<t;i++){
        
        curr+=arr[i];//add the elements always
        while (curr>s &&  start<i){ //check if sum is greater and do the needful
                curr-=arr[start];
                start++;
        }
        
            
        if (curr==s){//if equal break out
            v.push_back(start+1);
            v.push_back(i+1);
            flag=true;
            break;
        }
        
        
        
        
        
        

    }
    if (flag==false){
        v.push_back(-1);
    }
    
    cout<<v.at(0)<<" "<<v.at(1)<<endl;
    return 0;
}