#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *p = &i;
    cout<<" *p value is "<<p<<endl;
    int **ptr = &p;
    cout<<"**p value is "<<ptr<<endl;
    cout<<"**ptr value "<<*ptr<<endl;
    cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**ptr<<endl; 
    // int second = 7;
    // int *p = &second;
    // *p = 6;
    // cout<<second; 
    return 0;
}