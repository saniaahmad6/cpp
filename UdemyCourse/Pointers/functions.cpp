#include <iostream>
using namespace std;
void change(int *ptr);//pointer
int main(){
    int x=10;
    change(&x);
    cout<<x<<endl;
    


    return 0;
}
void change(int *ptr){//takes a memory location--reference
    *ptr *=2;//mult by 2--change in actual x

}