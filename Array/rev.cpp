#include <iostream>
#include <string>
using namespace std;
string fun(string str){
    int len=str.size();
    for (int i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    return str;
}
int main(){
    string s;
    cin>>s;
    cout<<fun(s);

    return 0;
}