#include<iostream>

using namespace std;
int main(){
    // int a, b=1;
    // a = 10;
    // if(++a){
    //     cout<<b<<endl;
    // }
    // else{
    //     cout<<++b<<endl;
    // }
    int a = 1;
    int b = 2;
    if(a-- > 0 & ++b > 2){
        cout<<"this print"<<endl;
    }
    else{
        cout<<"that is print"<<endl;
    }
    cout<<a<<" "<<b<<endl;
    
    return 0;
}