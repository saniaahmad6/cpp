#include <iostream>
using namespace std;
//refer sectionchallenge in functions folder for references with functions

int main(){
    int num=10;
    int &refernum=num;// num =refernum
    num=20;
    cout<<refernum<<endl;
    refernum=100;
    cout<<num<<endl;

    //const keyword
    int num1=10;
    int const &refernum1=num1;//refering to constant sort of--can't change num through refernum
    num1=20;
    cout<<refernum1<<endl;
    //refernum1=100;
    cout<<num1<<endl;

    //range based for loop/for each
    int arr[]={1,2,3};
    for (auto &i: arr){
        i=10;//i is an alias to elements of array
    }
    for (auto const &i: arr){//make i(alias) a constant so that you don't change its value
        cout<<i<<endl;
    }
    return 0;
}