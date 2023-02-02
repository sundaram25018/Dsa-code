// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(7);
//     s.insert(1);
//     s.insert(4);
//        for(auto i:s){
//            cout<<i<<endl;
//        }
//        cout<<"element is present or not "<<s.count(1)<<endl;
//        set<int>::iterator itr = s.find(4);
//        for(auto it = itr; it!=s.end(); it++){
//            cout<<*it<<" ";
//        }
//     return 0;
// }.

// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(2);
//     s.insert(13);
//     s.insert(4);
//     s.insert(5);
//     for(auto i : s){
//         cout<<i<<" ";
//     }cout<<endl; 
//     cout<<s.size()<<endl;
//     s.erase(13);
//     for(auto i : s){
//         cout<<i<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int>s;
    s.insert(2);
    s.insert(2);
     s.insert(2);
      s.insert(2); 
    s.insert(13);
    s.insert(4);
    s.insert(5);
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl; 
    cout<<s.size()<<endl;
    s.erase(s.find(2));
    for(auto i : s){
        cout<<i<<" ";
    }
    return 0;
}