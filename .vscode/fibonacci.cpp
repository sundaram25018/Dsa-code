#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int sum =  fib(n-1)+fib(n-2);
   
    return sum;
}
int main(){
    int n =6;
    cout<<fib(n);
    return 0;
}