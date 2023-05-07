// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>countInteger(vector<int>arr){
//     vector<int>ans(100,0);
//     for (auto x: arr)
//     {
//         ans[x]++;
//     }
//     return ans;
// }
// int main(){
//     vector<int>v;
//     v.push_back(12);
//     v.push_back(1);
//     v.push_back(11);
//     v.push_back(22);
//     v.push_back(32);
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(12);
//     v.push_back(22);
//     v.push_back(1);
//     v.push_back(16);
//     countInteger(v);
//     for(int i:v){
//         cout<<i<<" ";
//     }

    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void square(int arr[], int n ){
//    for(int i = 0; i<n; i++){
//      arr[i] =  arr[i]*arr[i];
//    }
// }
// void sort(int arr[], int n){
//     for (int i = 1; i < n; i++)
//     {
//         for(int j = 0; j<n-i; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
    
    
// }
// int main(){
//     int arr[] = {-4, -1, 0, 3,10};
//     int n = 5;
// square(arr,n);
// sort(arr,n);
// for(int i =0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a = -4;
    cout<<abs(a);
    return 0;
}