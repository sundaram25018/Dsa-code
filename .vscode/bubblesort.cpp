// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//                 cin>>arr[i];
//     }
//     // int count =1;
//     // while (count<n)
//     for(int j = 1; j<n; j++)
//     {
//          for (int i = 0; i < n-j; i++)
//     {
//         if(arr[i]>arr[i+1]){
//             // int temp = arr[i];
//             // arr[i] = arr[i+1];
//             // arr[i+1] = temp;
//             swap(arr[i],arr[i+1]);
//         }
//     }
    
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
 
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,7,2,1,9};
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        
       for (int j = 0; j < n-i; j++)
       {
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
       } 
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}