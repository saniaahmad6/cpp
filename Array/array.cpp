#include <iostream>

using namespace std;
void fun(int * A,int n){//takes as pointer always regardless we declare it
    //cant use for each for pointer
    cout<<sizeof(A)/sizeof(int)<<endl;//takes as pointer
}
int main(){
    int arr[]={1,2,3,4};
    fun(arr,4);
    cout<<sizeof(arr)/sizeof(int)<<endl;
    for (auto i:arr){//can use for each for array
        cout<<i<<" "<<endl;
    }
    return 0;
}