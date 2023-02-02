#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(3);
    l.push_front(2);
    // for(int i:l){
    //     cout<<i<<" ";

    // }
    cout<<l.size()<<" size of arrey"<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i;
    }
    return 0;
}