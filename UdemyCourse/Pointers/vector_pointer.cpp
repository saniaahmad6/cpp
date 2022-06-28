#include <iostream>
#include <vector>
#include <string>
using namespace std;
//function overloading
void display(const vector <string> * const);
void display(int *, int);
int main(){
    vector <string> s={"sania","ahmad","yay"};
    display(&s);
    int arr[]={1,2,3,4,-1};
    display(arr,-1);
    return 0;
}
void display(const vector <string> *const v){// pointers takes a memory location--pass by reference
    //(*v).at(0)="yaya";//pointer to const 
    for (auto i: *v){
        cout<<i<<endl;
    }
    //v=nullptr; constant pointer
}
//only pointers here, not reference
//no constants beacuse arr++ is taking place
void display(int *arr, int sentinel){// pointers takes a memory location--pass by reference
    while (*arr!=sentinel){
        cout<<*arr++<<endl;//R->L associativity, post increment, first do then increment
    }
}