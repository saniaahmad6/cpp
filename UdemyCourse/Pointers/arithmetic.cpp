#include <iostream>
using namespace std;
int main(){
    int arr[]={100,99,89,-1,80};
    int *ptr{nullptr};
    ptr=arr;
    while (*ptr!=-1){
        cout<<*ptr<<endl;
        ptr++;//increment
    }
    ptr=arr;//reset
    while (*ptr!=-1){
        cout<<*ptr++<<endl;//R->L associative but post increment: fisrt use(derefer) then increment
        
    }
    // cout<<int_ptr<<endl;//heap int 
    // cout<<&int_ptr<<endl;//address of pointer
    // cout<<*int_ptr<<endl;//value of int in heap
    // delete int_ptr;//free heap

    // //array in heap
    // double *arrdb_ptr {nullptr};//points nowwhere
    // int size{};
    // cout<<"enter size: "<<endl;
    // cin>>size;
    // arrdb_ptr=new double[size];
    // cout<<arrdb_ptr<<endl;//address of first element in heap array
    // cout<<*arrdb_ptr<<endl;//value garbage
    // delete [] arrdb_ptr;
    return 0;
}//note: pointers are in stack