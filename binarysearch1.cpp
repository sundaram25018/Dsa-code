#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while (start <=end )
    {
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] >= key){
            end = mid-1;
        }
        else{
           start =  mid + 1; 
        }
        mid = (start+end)/2;
    }
    return -1;
    
}
int main(){
    int even[6] = {1,3,4,6,7,9};
    int odd[5] = {2,6,9,10,23};
    int index = binarySearch(even,6,7);
    int oddindex = binarySearch(odd,5,10);
    cout<<"index of 10 is :"<<oddindex<<endl;
    // cout<<"Index of 7 is : "<<index<<endl;
    cout<<"sundaram dubey"<<endl;
    return 0;
}