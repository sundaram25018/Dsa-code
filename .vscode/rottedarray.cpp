// #include<iostream>
// #include<array>
// using namespace std;
// int getpivot(int arr[], int n){
//     int s =0;
//     int e = n-1;
//     int mid;
//     while (s<e)
//     {
//         mid = (s+e)/2;

//         if(arr[mid]>=arr[0]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//     }
//     return e;
// }
// int main(){
//     int arr[] = {1,2,3};
//     int n = 3; 
//     cout<<getpivot(arr,n)<<endl;
//     return 0;
// }



#include<iostream>
using namespace std;
int search(int arr[], int n,int k){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
      if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (arr[mid] <= k && k <= arr[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    
    }
    return -1;
}
int main(){
    int arr[] = {4,5,6,7,0,1,2};
    int n = 7;
    int key = 1;
    cout<<search(arr,n,key);
    return 0;
}