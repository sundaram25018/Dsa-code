#include<iostream>
#include<algorithm>
using namespace std;
int getmax(int arr[], int n){
    int max = INT32_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int getmin(int arr[], int n){
    int min = INT32_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int kthmax(int arr[], int n, int k){
    sort(arr, arr+n);
   
    return arr[n-k];
}
int kthmin(int arr[], int n, int k){
    sort(arr, arr+n);
   
    return arr[k-1];
}
int main(){
    int arr[] = {2,4,7,1,5,6};
    int  n = 6;
    cout<<getmax(arr, n)<<" "<<getmin(arr, n)<<endl;
    cout<<kthmax(arr,n,2)<<" "<<kthmin(arr, n, 2);
    return 0;
}