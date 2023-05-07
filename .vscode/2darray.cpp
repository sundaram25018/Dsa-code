// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4];
//     cout<<"enter your arrey"<<endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
// cout<<"your arrey is "<<endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// #include<iostream>

// using namespace std;
// bool ispresent(int arr[][4],int target, int i,int j){
 
//     return 0;
// }


// int main(){
//     int arr[3][4];
//     cout<<"enter your arrey"<<endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }


// cout<<"your arrey is "<<endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"enter your search result "<<endl;
//     int target;
//     cin>>target;
   
// }

// #include<iostream>
// using namespace std;
// int getMin(int arr[], int n){
//     int min = INT32_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     return min;
    
// }
// int getMax(int arr[], int n){
//     int max = INT32_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     return max;
    
// }
// int main(){
//     int size;
//     cin>>size;
//     int arr[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Maximum element : "<<getMax(arr,size)<<endl;
//     cout<<"Minimum element : "<<getMin(arr, size)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// bool ispresent(int arr[],int n, int target){
// for (int i = 0; i < n; i++)
// {
//     if(arr[i] == target){
//         return true;
//     }
// }
// return false;
// }
// int main(){
//     int arr[] = { 3,8,5,2,1};
//     int n = 5;
// if(ispresent(arr,5,3 )){
//     cout<<"Element is present "<<endl;
// }
// else{
//     cout<<"Element is not present "<<endl;
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int reverse(int arr[], int n){
//    int start = 0;
//    int end = n-1;
//    while (start<=end)
//    {
//        swap(arr[start],arr[end]);
//        start++;
//        end--;
//    } 
// }
// void printArr(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    
// }
// int main(){
//     int arr[] = {2,8,9,1,4,7};
//     int size = 6;
//     reverse(arr,6);
//     printArr(arr,6 );
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void swapArray(int arr[], int size){
//     for (int i = 0; i < size; i= i+2)
//     {
//         if(arr[i+1]< size){
//            swap(arr[i], arr[i+1]);
//         }
//     }
// }
// void printArr(int arr[], int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    
// }
// int main(){
//     int arr[5] = {4,2,7,5,1};

//     swapArray(arr,5);
//     printArr(arr,5);
//     return 0;
// }

#include<iostream>
using namespace std;
// int uniqueElement(int arr[], int n){
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans^arr[i];
//     }
//     return ans;
    
// }

// int uniqueElement(int arr[], int n){
// int ans[5];
//  for (int i = 0; i < n; i++)
//      {
//          ans[5] = ans[5]^arr[i];
//    }
//    return arr[5];
// }
// int main(){
//     int arr[] = {3,2,7,2,3,8,7};
//     int n = 7;
//     cout<<uniqueElement(arr,7);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int FindDublicate(int arr[], int n){
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans^arr[i];
//     }
    
//     for (int i = 1; i < n; i++)
//     {
//         ans = ans^i;
//     }
    
//     return ans;
// }
// int main(){
//     int arr[] = {4,2,1,3,1};
//     int n = 5;
//     cout<<FindDublicate(arr,5)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // int Intersection(int arr[], int arr2[], int n1, int n2){
// //     int num;
// //     for (int i = 0; i < n1; i++)
// //     {
// //         int element = arr[i];
// //         for (int j = 0; j < n2; j++)
// //         {
// //             if(element == arr2[j]){
// //                  num = element;
// //                 arr2[j] = INT32_MIN;
// //                 break; 
// //             }
// //         }
        
// //     }
// //  return num;   
// // }
// int Intersection(int arr1[], int arr2[], int n, int m){
//     int  i =0, j = 0;
//     int ans;
//     while(i<n && j<m){
//         if(arr1[i]==arr2[j]){
//             ans = arr1[i];
//             i++;
//             j++;
//         }
//         if(arr1[i]<arr2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[] = {1,2,3,5,3};
//     int arr2[] = {3,4};
//     int n = 5;
//     int m = 2;
//     cout<<Intersection(arr,arr2,n,m)<<endl;
//     return 0;
// }