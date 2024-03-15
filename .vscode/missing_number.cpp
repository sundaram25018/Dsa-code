// #include<iostream>
// using namespace std;
// int missing(int arr[], int n){
//     int sum = 0;
//     int num =n+1;
//     int res = num*(num+1)/2;

//     for(int i = 0; i<n; i++){
//         sum+=arr[i];
//     }
//     return res-sum;
// }
// int main(){
//     int arr[] = {1,2,3,6,7,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<missing(arr,n)<<endl;
//     return 0;
// }


// #include<iostream>
// #include<unordered_set>
// using namespace std;
// void triplet(int arr[], int n){
//     bool found = false;
//     for(int i = 0; i<n-1; i++){
//         unordered_set<int>s;
//         for(int j = i+1; j < n; j++){
//             int x = -(arr[i]+arr[j]);
//             if(s.find(x)!=s.end()){
//                 cout<<"Element is found:"<<arr[i]<<" "<<arr[j]<<" "<<x<<endl;
//                 found = true;
//             }
//             else{
//                 s.insert(arr[j]);
//             }
//         }
//     }
//     if(found == false){
//         cout<<"No triplet found"<<endl;
//     }
// }
// int main(){
//      int arr[] = {0,-1,2,-3,1};
//      int n = sizeof(arr)/sizeof(arr[0]);
//      triplet(arr,n);
//     return 0;
// }

#include<iostream>
#include<stack>
using namespace std;
bool valid(string s){
    stack<char>st;
    for(int i = 0; i<s.length(); i++){
        char c = s[i];
        if(c == '('){
            st.push('(');
        }
        else if(c == ')'){
            if(st.empty()){
                return false;
            }
            else{
                char p = st.top();
                if(p == '('){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s = "()(())()";
    if(valid(s)==true){
        cout<<"Valid parenthesis"<<endl;
    }
    else{
        cout<<"Not valid parenthesis"<<endl;
    }
    return 0;
}