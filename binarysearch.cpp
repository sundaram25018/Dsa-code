#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
   
    while (start <=end )
    {
         int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1; 
        }
        
    }
    return -1;
    
}
int main(){
    int even[6] = {1,3,4,6,7,9};
    int odd[5] = {2,6,9,10,23};
    int index = binarySearch(even,6,7);
    cout<<"Index of 6 is : "<<index<<endl;
    
    return 0;
}

// #include<iostream>
// using namespace std;
// int linear(int arr[], int n, int key){
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
    
// }
// int main(){
//     int arr[] = {2,4,6,8,9};
//     int n = 5;
//     cout<<"enter your key"<<endl;
//     int key;
//     cin>>key;
//     int index = linear(arr, 5, key);
//     cout<<"element is find in "<<index<<endl;
    
//     return 0;
// }