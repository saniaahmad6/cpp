#include <iostream>
using namespace std;
void change2(int &ptr,int &ptr1);
void change1(int *ptr,int *ptr1);
int main(){
    int x=10,y=20;
    change1(&x,&y);
    cout<<x<<" "<<y<<endl;
    change2(x,y);
    cout<<x<<" "<<y<<endl;


    return 0;
}
void change1(int *ptr,int *ptr1){//takes a memory location--reference
    int temp= *ptr;//mult by 2--change in actual x
    *ptr=*ptr1;
    *ptr1=temp;
}

void change2(int &ptr,int &ptr1){//takes a memory location--reference---
    int temp= ptr;//mult by 2--change in actual x
    ptr=ptr1;
    ptr1=temp;
}