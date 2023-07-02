#include<iostream>
#include<array>
using namespace std;
int getpivot(int arr[], int n){
    int s =0;
    int e = n-1;
    int mid;
    while (s<e)
    {
        mid = (s+e)/2;

        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return e;
}
int main(){
    int arr[] = {6,7,8,2,3};
    int n = 5; 
    cout<<getpivot(arr,n)<<endl;
    return 0;
}