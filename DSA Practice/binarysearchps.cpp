#include<iostream>
using namespace std;
int firstoccurance(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
            
        }
        else if(key>arr[mid]){
            s = e+1;
        }
        else if(key<arr[mid]){
            e = s-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int lastoccurance(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(key == arr[mid]){
            ans = mid;
            s = mid+1;
            
        }
        else if(key>arr[mid]){
            s = e+1;
        }
        else if(key<arr[mid]){
            e = s-1;
        }
    }
    return ans;
}
int main(){
    int arr[] = {2,3,4,4,5,7};
    int size = 6;
    cout<<"first occurance is "<<firstoccurance(arr,size,7)<<endl;
    cout<<"last occurance is "<<lastoccurance(arr,size,7);
    return 0;
}