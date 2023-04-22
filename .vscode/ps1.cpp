#include<iostream>
using namespace std;
// void AlternateSwap(int arr[], int n){
//     for(int i = 0; i<n; i+=2){
//        if(i+1 < n){
//         swap(arr[i+1], arr[i]);
//        }

//     }
// }
// int findUniqe(int arr[], int n){
//     int ans = 0;
//     for(int i = 0; i<n; i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }
int FindDublicate(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    
    for (int i = 1; i < n; i++)
    {
        ans = ans^i;
    }
    
    return ans;
}
int main(){
    // int arr[] = {1,2,3,4,5,6};
    int arr[] = {2,4,6,2,7};
    int n = 5;
    // AlternateSwap(arr, n);
    // cout<<findUniqe(arr, n)<<endl;
    cout<<FindDublicate(arr, 5)<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}