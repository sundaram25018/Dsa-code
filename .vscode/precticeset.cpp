#include<iostream>

using namespace std;
int firstocc(int arr[], int n,int key){
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if (arr[mid]>key)
        {
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2; 
    }
   return ans;
}

int lastocc(int arr[], int n,int key){
    int s=0,e=n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if (arr[mid]>key)
        {
            e = mid-1;
        }
        else{
           s = mid+1;
        }
        mid = s + (e-s)/2; 
    }
   return ans;
}
int main(){
    int even[6] = {5,7,7,8,10,10};
    cout<<"first occurance of key is in index "<<firstocc(even,6,10)<<endl;;
       cout<<"last occurance of key is in index "<<lastocc(even,6,10); 
    return 0;
}