#include<iostream>
using namespace std;
int search(int arr[], int n, int k ){
    
    for(int i = 0; i<n; i++){
        if(arr[i]==k){
           
            return i;
        }
    }
}
int binarysearch(int arr[], int n, int k){
    int s = 0;
    int e = n;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            s = mid+1;
        }

    }
    return -1;
    
}
int main(){
    int arr[] = {2,4,9,6,3,1,5};
    int arr1[] = {2,4,5,6,8,9};
    
    cout<<search(arr,7, 3)<<endl;;
    cout<<binarysearch(arr1,6,6);

    return 0;
}