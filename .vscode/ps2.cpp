// #include<iostream>
// using namespace std;
// void reverse(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     while (s<e)
//     {
//         swap(arr[s++], arr[e--]);

//     }
    
// }

// // void reverseat(int arr[], int n, int key ){
// //     int s = key+1;
// //     int e = n-1;
// //     while (s<e)
// //     {
// //         swap(arr[s++], arr[e--]);

// //     }
// // }
// void mergeSorted(int arr1[],int arr2[], int n, int m, int arr3[]){
//   int i = 0, j = 0, k = 0;
//   while (i<n && j<m)
//   {
//     if(arr1[i]<arr2[j]){
//         arr3[k] = arr1[i];
//           k++;
//           i++;
//     }
//     else{
//         arr3[k] = arr2[j];
//         k++;
//         j++;
//     }
//   }
//   while (i<n)
//   {
//     arr3[k] = arr1[i];
//           k++;
//           i++;
//   }
//   while (j<m)
//   {
//     arr3[k] = arr2[j];
//           k++;
//           j++;
//   }
  
  

// }
// int main(){
//     int arr1[] = {2,3,5,6};
//     int arr2[] =  {1,4,7};
//     int n = 4;
//     int m = 3;
//     int arr3[7] = {0};
//     mergeSorted(arr1, arr2, n, m, arr3);
//     // reverse(arr, n);
//     // reverseat(arr, n, 1);
//     for(int i = 0; i<7; i++){
//           cout<<arr3[i]<<" ";
//     }   
//      return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void moveZero(vector<int>&v){
  int n = v.size();
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if(v[i] != 0){
       swap(v[i], v[j]);
       j++;       
    }
  }
  
}
int main(){
vector<int>v;
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(4);
v.push_back(3);
moveZero(v);
for(int i:v){
        cout<<i<<" ";
    }


    return 0;
}