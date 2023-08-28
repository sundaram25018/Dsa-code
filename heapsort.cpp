#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
     if(right<n && arr[right]>arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, i);
    }
}
void heapsort(int arr[], int n){

     for (int i = n / 2 - 1; i >= 0; i--){
         heapify(arr, n, i);
     }
     
      
       for (int i = n - 1; i > 0; i--) {
 
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main(){
    int arr[] = {4,3,6,8,1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    heapsort(arr, size);
    for(int  i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}