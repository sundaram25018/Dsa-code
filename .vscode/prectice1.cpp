#include<iostream>
#include<vector>
using namespace std;
vector<int>reverse(vector<int>v){
    int s=0, e = v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}


void print(vector<int>v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v = {11,7,3,12,4};
    for(int i:v){
        cout<<"vector is "<<i<<" ";
    }
    vector<int>ans = reverse(v);
    cout<<"printing revese arrey"<<endl;
    print(ans);
    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>reverse(vector<int>v, int m){
//     int s=m+1, e = v.size()-1;
//     while (s<=e)
//     {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int>v){
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int>v,m;
//     v.push_back(11);
//      v.push_back(1);
//       v.push_back(9);
//        v.push_back(8);
//         v.push_back(4);

//     // for(int i:v){
//     //     cout<<"vector is "<<i<<" ";
//     // }

//     vector<int>ans = reverse(v,9);
//     cout<<"printing revese arrey"<<endl;
//     print(ans);
//     return 0;
// }