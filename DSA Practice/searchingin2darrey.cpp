#include<iostream>
using namespace std;
bool ispresent(int arr[][4], int target, int row, int col){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j] == target){
                return 1;
            }
        }
        
    }
    return 0;
}
int largestrow(int arr[][4],int row, int col){
    int maxi = INT32_MIN;
    int rowno = -1;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum +=arr[i][j];
        }
        if(sum>maxi){
            rowno = i;
            maxi = sum;
        }
        
    }
    cout<<"largest row sum is "<<maxi<<endl;
    return rowno;
}
void printinwaveform(int arr[][4], int row, int col){
    for (int col = 0;col < 3; col++)
    {
        if(col&1){
            for (int rows = 2; rows >= 0; rows++)
            {
                cout<<arr[rows][col]<<" ";
            }
            
        }
        else{
            for (int rows = 0; rows < 3; rows++)
            {
                cout<<arr[rows][col]<<" ";
            }
            
        }
    }
    
}
int main(){
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    // int target;
    // cout<<"enter target element "<<endl;
    // cin>>target;
    // if (ispresent(arr,target, 3,4)){
    //     cout<<"element is present "<<endl;
    // }
    // else{
    //     cout<<"element is not present "<<endl;
    // }
    
    cout<<largestrow(arr,3,4);
    printinwaveform(arr,3,4);
    

    return 0;
}