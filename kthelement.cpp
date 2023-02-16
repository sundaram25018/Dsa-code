#include<iostream>
using namespace std;
 int findKthLargest(int arr[],int n, int k) {

         for (int i = 1; i < n; i++)
    {
        
       for (int j = 0; j < n-i; j++)
       {
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
       } 
    }
        int a = n-k;
        int ans;
        for(int i = 0; i<n; i++){
            if(i == a){
                   ans = arr[i];
                  break;
            }
        }
        return ans;
    }
int main(){
    int arr[] = {3,2,1,5,6,4};
    int n = 6;
    int k = 3;
    cout<<findKthLargest(arr, n, k);
     
    return 0;
}