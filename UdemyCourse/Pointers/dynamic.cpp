#include <iostream>
using namespace std;
int main(){
    int *int_ptr{nullptr};
    int_ptr=new int;//int has no name
    cout<<int_ptr<<endl;//heap int 
    cout<<&int_ptr<<endl;//address of pointer
    cout<<*int_ptr<<endl;//value of int in heap
    delete int_ptr;//free heap

    //array in heap
    double *arrdb_ptr {nullptr};//points nowwhere
    int size{};
    cout<<"enter size: "<<endl;
    cin>>size;
    arrdb_ptr=new double[size];
    cout<<arrdb_ptr<<endl;//address of first element in heap array
    cout<<*arrdb_ptr<<endl;//value garbage
    delete [] arrdb_ptr;
    return 0;
}//note: pointers are in stack