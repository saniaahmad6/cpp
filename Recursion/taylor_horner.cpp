#include <iostream>

using namespace std;

double fun(int x,int n){
    static double s=1;
    if (n==0) return s;
    
    s=(1+x*s/n);
    return fun(x,n-1);

}
double e(int x,int n){
    double s=1;
    for (;n>0;n--) s=1+x*s/n;
    return s; 
}
int main(){
    cout<<fun(3,10)<<endl;
    cout<<e(3,10)<<endl;
    return 0;
}