#include<iostream>
using namespace std;
int sumOfarrey(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[5];
    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Sum of arrey is "<<sumOfarrey(arr, 5)<<endl;

    return 0;
}