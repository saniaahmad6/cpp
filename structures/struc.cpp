#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;

typedef struct complex{
    int real;
    int imag;
}comp;

struct card{
    int face;
    int color;
    int type;
};

int main(){
    comp p={100,300};
    p.real=100;
    p.imag=325;
    cout<<p.real<<" "<<p.imag<<endl;
    card no{1,0,3};//can skip: word struct in cpp
    card *ptr=nullptr;
    ptr=new card;
    ptr->face=15;
    ptr->color=15;
    cout<<ptr->color<<endl;
    delete ptr;
    ptr
    cout<<no.face<<" "<<no.color<<endl;
}