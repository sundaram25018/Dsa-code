#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>v;
    vector<int>v(5,1);

    cout<<"print number"<<endl;
    for(int i:v){
        cout<<i;
    }
    // v.push_back(5);
    // cout<<"capacity"<<v.capacity()<<endl;
    // v.push_back(4);
    // v.push_back(2);
    // cout<<"capacity"<<v.capacity()<<endl;
    // cout<<"size"<<v.size()<<endl;
    return 0;
}