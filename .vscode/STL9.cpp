#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1] = "sandy";
     m[2] = "aman";
      m[23] = "rocky";
       m[4] = "mandy";
       m.insert({5,"bheem"});
       for(auto i:m){
           cout<<i.first<<" "<<i.second<<endl;
       }
    return 0;
}