#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int>m;
    pair<string, int>p = make_pair("babbar", 3);
    m.insert(p);
    pair<string, int>pair2("love", 2);
    m.insert(pair2);
    m["mera"] = 1;
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m.size()<<endl;
    cout<<m.count("love")<<endl;
    // m.erase("babbar");
    unordered_map<string, int>:: iterator it = m.begin();
    while (it != m.end())
    {
        cout<<it->first<<" "<<it->second;
        it++;
    }
    

    return 0;
}