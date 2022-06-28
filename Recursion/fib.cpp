#include <iostream>

using namespace std;


double f(int n){
    if (n<=2) return n-1;
    return f(n-1)+f(n-2); 
}
int main(){
    cout<<f(4)<<endl;
    cout<<f(3)<<endl;
    return 0;
}