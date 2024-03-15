#include<iostream>
using namespace std;
// bool Dublicates(int arr[], int n){
//       bool flage= false;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(arr[i] == arr[j]){
//                 return true;
//             }
//         }
        
//     }
//     return flage;
    
// }
bool Dublicates(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == arr[i+1]){
            return true;
        }
    }
    return false;
    
}
int main(){
    int arr[5];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    if(Dublicates(arr, n)){
        cout<<"Dublicate are there "<<endl;
    }
    else{
        cout<<"Dublicate is not there"<<endl;
    }

    
     
    
    return 0;
}