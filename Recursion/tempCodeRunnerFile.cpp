#include <iostream>

using namespace std;

double fun(int x,int n){
    static double s=1;
    if (n==0) return s;