#include<iostream>
using namespace std;
void Alternateswapping(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
    
}
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[6] = {2,3,5,6,7,};
    int n = 5;
    Alternateswapping(arr,n);
    display(arr, n);
    
    return 0;
}