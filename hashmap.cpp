#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int>m;
    // method 1 to insert in map
    pair<string, int>p = make_pair("sundaram", 1);
    m.insert(p);
   // 2nd method 
   pair<string, int>p1("mahesh", 2);
   m.insert(p1);
   // 3rd method to inssert 
   m["aman"]=3;
   m["Nikil"] = 4;

   // search

   cout<<m["aman"]<<endl;
    cout<<m["sundaram"]<<endl;
    cout<<m.at("mahesh")<<endl;
    
    // size

    cout<<m.size()<<endl;
    // to check pressence
    cout<<m.count("aman")<<endl;
    m.erase("mahesh");
      cout<<m.size()<<endl;

      /// for print
    //   for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    //   }
    // other method to print
    unordered_map<string, int>:: iterator it = m.begin();
    while (it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    
    return 0;
}