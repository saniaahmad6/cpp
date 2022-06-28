#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print (int);
void print (double);
void print (string);
void print (vector <int>);
void print (string,string);
void print (int,int);    
int main(){
    print (5);
    print (6.45);
    print ("Sania");//c->c++
    vector <int> array {1,2,3};
    print (array);
    print ("Sania","Ahmad");
    print (10,5);
    return 0;
}

void print (int num){
    cout<<num<<" ";
}

void print (double num){
    cout<<num<<endl;
}

void print (string s){
    cout<<s<<endl;
}

void print (vector <int> v){
    for(auto i:v){
        cout<<i<<endl;
    }
    
}

void print (int num,int num1){
    cout<<num<<" "<<num1<<endl;
}

void print (string s, string s1){
    cout<<s+" "+s1<<endl;
}