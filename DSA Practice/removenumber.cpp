#include<iostream>
using namespace std;
int remove(int arr[], int n, int target){
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=target){
            arr[j++] = arr[i];
        }
    }
    
return j;
}
int main(){
    int arr[] = {1,1,1,2,3,3,4,5};
    int n = 8;
    cout<<remove(arr,n, 3);
    return 0;
}