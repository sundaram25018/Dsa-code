#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int mainarreyIdx = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarreyIdx++];

    }
    mainarreyIdx = mid+1;
     for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainarreyIdx++];

    }
int idx1 = 0;
int idx2 = 0;
mainarreyIdx = s;
while (idx1 < len1 && idx2 < len2)
{
    if(first[idx1]< second[idx2]){
        arr[mainarreyIdx++] = first[idx1++];
    }
    else{
        arr[mainarreyIdx++] = second[idx2++];
    }
}
while (idx1 < len1)
{
   arr[mainarreyIdx++] = first[idx1++];
}
while (idx1 < len2)
{
   arr[mainarreyIdx++] = second[idx2++];
}

    
}
void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[] = {4,8,6,1,3};
    int n = 5;
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}