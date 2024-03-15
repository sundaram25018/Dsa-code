#include<iostream>
using namespace std;
int arreysum(int arr[], int n, int target){
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==target){
                cout<<i<<" "<<endl;
               
            }
             break;
        }
        
    }
    
}
int main(){
    int arr[] = {2,3,4,5,6};
    cout<<arreysum(arr,5,5);
    return 0;
}