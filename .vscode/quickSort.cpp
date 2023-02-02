// #include<iostream>
// using namespace std;
// int partition(int arr[], int s,int e){
// int piovt = arr[s];
// int cnt = 0;
// for (int i = s+1; i <= e; i++)
// {
//     if(arr[i] <= piovt){
//         cnt++;
//     }
// }
// int pivotIdx = s + cnt;
// swap(arr[pivotIdx], arr[s]);
// int i = s;
// int j = e;
// while (i<pivotIdx && j>pivotIdx){
//     while (arr[i]<piovt)    
//     {
//         i++;
//     }
//      while (arr[j]>piovt)    
//     {
//         j--;
//     }
//     if(i<pivotIdx && j>pivotIdx){
//         swap(arr[i++], arr[j--]);
//     }
    
// }

// return pivotIdx;

// }
// void quickSort(int arr[], int s, int e){
// if(s>=e){
//     return;
// }
//     int p = partition(arr, s, e);
//     quickSort(arr, s, p-1);
//     quickSort(arr, p+1, e);

// }
// int main(){
//     int arr[5] = {6,3,1,8,4};
//     int n = 5;
//     quickSort(arr,0, n-1);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    

//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
int partion(int arr[], int s, int e){
    int pivot = arr[e];
    int i = s-1;
    for (int j = s; j < e; j++)
    {
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
        
    }
    
    swap(arr[i+1], arr[e]);
    return(i+1);
}
void quickSort(int arr[], int s,int e){
    if(s>=e){
        return;
    }
    int p = partion(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[7] = {7,9,10,2,1,15,6};
    int n = 7;
    quickSort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}