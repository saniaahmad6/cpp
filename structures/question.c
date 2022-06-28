#include<stdio.h>
unsigned long long int fib(int n){
    if(n==1||n==0)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
int main(){
    printf("your term is %llu",fib(1));
    return 0;
}