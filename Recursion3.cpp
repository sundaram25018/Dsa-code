// #include<iostream>
// using namespace std;
// bool issorted(int *arr, int size){
//     if(size==0 || size == 1){
//         return true;
//     }
//     if (arr[0]>arr[1])
//     {
//         return false;
//     }
//     else{
//       bool rest =  issorted(arr+1,size-1);
//     }
    
// }
// int main(){
//     int arr[5] = {2,8,15,19,23};
//     int size = 5;
//     bool ans = issorted(arr,size);
//     if (ans)
//     {
//         cout<<"Arrey is sorted"<<endl;
//     }
//     else{
//         cout<<"Arrey is not sorted"<<endl;
//     }
    
//     return 0;
// }

// adding in arrey

// #include<iostream>
// using namespace std;
// int getsum(int *arr,int size){
//     if(size == 0){
//         return 0;
//     }
//     if(size == 1){
//         return arr[0];
//     }

//     int remaining = getsum(arr+1,size-1);
//     int sum  = arr[0] + remaining;
//     return sum;
// }
// int main(){
//     int arr[5] = {2,3,5,7,3};
//     int size = 5;
//     int sum = getsum(arr,size);
//     cout<<"sum : "<<sum<<endl;
//     return 0;
// }


// linear search in recursion

// #include<iostream>
// using namespace std;
// bool linearSearch(int *arr,int size,int key){
//     if(size == 0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }
//     else{
//         bool remaining = linearSearch(arr+1,size-1,key);
//         return remaining;
//     }

// }
// int main(){
//     int arr[5] = {3,6,8,2,4};
//     int size = 5;
    
// int key;
// cin>>key;
// bool ans = linearSearch(arr,size,key);
// if(ans){
//     cout<<"Element is found "<<endl;
// }
// else{
//     cout<<"Element is not found"<<endl;
// }
//     return 0;
// }

// binary search

// #include<iostream>
// using namespace std;
// bool binarySearch(int *arr, int s, int e, int k){
//     if(s>e){
//         return false;
//     }
//     int mid = s+(e-s)/2;
// if(arr[mid]==k){
//     return true;
// }
//     if(arr[mid]<k){
//         return binarySearch(arr,mid+1,e,k);
//     }
//    else{
//        return binarySearch(arr,s,mid-1,k);
//    }
// }
// int main(){
//     int arr[5] = {3,5,7,9,12};
//     int size = 5;
//     int key;
//     cin>>key;
//      bool ans = binarySearch(arr,0,5,key);
//       if(ans){
//     cout<<"Element is found "<<endl;
// }
// else{
//     cout<<"Element is not found"<<endl;
// }

//     return 0;
// }
