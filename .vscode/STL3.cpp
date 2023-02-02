#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(3);
    d.push_front(5);
    cout<<"element position"<<d.at(1);
    cout<<"empty or not"<<d.empty();
    
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    return 0;
}