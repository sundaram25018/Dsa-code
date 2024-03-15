#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
    int a = 4;
    int b = 3;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b<<endl;
    string s = "";
    s.push_back('q');
    s.push_back('q');
    s.push_back('q');
    s.push_back('q');
    vector<string>str = {"flower","flow","flight"};
    sort(str.begin(), str.end());
    for(int i = 0; i<str.size(); i++){
        cout<<str[i]<<endl;
    }
    
    return 0;
}