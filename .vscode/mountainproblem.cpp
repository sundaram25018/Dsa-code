#include<iostream>
using namespace std;
int mountainarrey(int arr[], int size){
int s = 0, e = size-1;
int mid = s + (e-s)/2;
while (s<e)
{
    if (arr[mid]< arr[mid+1])
    {
        s = mid+1;
    }
    else{
        e = mid-1;
    }
    int mid = s + (e-s)/2;
}
  return s;
}
int main(){
    int num[5] = {1,3,5,2,0};
    cout<<"hight number will be on index"<<mountainarrey(num,5)<<endl;
        return 0;
}