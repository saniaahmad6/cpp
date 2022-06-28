#include <bits/stdc++.h>

using namespace std;

int main(){
    array <int,10> arr={1,2,3,4,5,6,7,8,9,0};
    array <int,10> arr1={1,2,3,4,5,6,7,8,10000};//if u intitialise less then rest =0
    cout<<arr.max_size()<<endl;
    cout<<arr.size()<<endl;
    arr.swap(arr1);
    for(int i=0;i<arr.size();i++) cout<<arr.at(i)<<" ";
    cout<<endl;
    for(int i=0;i<arr1.size();i++) cout<<arr1.at(i)<<" ";
    return 0;
}