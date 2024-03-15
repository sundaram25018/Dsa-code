#include<iostream>
using namespace std;
// int getmax(int arr[], int n, int k){
//     int maxi = 0;
//     for(int i = 0; i+k-1<n; i++){
//         int sum = 0;
//         for(int j = i; j<i+k; j++){
//              sum = sum+ arr[j];
//         }
//         if(sum>=maxi){
//           maxi = sum;
//         }
        
//     }
//     return maxi;
// }
int slidingwindow(int arr[], int n, int k){
    int maxi = 0;
    int sum = 0;
    for(int i = 0; i<k; i++){
        sum = sum+arr[i];
    }
    maxi = sum;
    for(int i = k; i<n; i++){
        sum = sum + arr[i]-arr[i-k];
        if(sum>maxi){
            maxi = sum;
            }
    }
    
    return maxi;
}
int main(){
    int arr[] = {1,3,5,6,2,3,5};
    int n = 7;
    int k = 3;
    // cout<<getmax(arr, n, k)<<endl;
    cout<<slidingwindow(arr, n, k)<<endl;
    return 0;
}