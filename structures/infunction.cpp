#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

struct rectange{
    int l;
    int b;
};
void func(rectange &r1){
    r1.l++;
    cout<<r1.l<<endl;
}
void func1(rectange *r1){
    r1->l++;
    cout<<(*r1).l<<endl;
}

int main(){
    rectange p={100,300};
    func(p);
    cout<<p.l<<endl;
    func1(&p);
    cout<<p.l<<endl;
    // cout<<p.real<<" "<<p.imag<<endl;
    // card no{1,0,3};//can skip: word struct in cpp
    // card *ptr=nullptr;
    // ptr=new card;
    // ptr->face=15;
    // ptr->color=15;
    // cout<<ptr->color<<endl;
    // delete ptr;
    // ptr
    // cout<<no.face<<" "<<no.color<<endl;
    return 0;
}