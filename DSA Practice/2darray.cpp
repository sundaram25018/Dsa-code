#include<iostream>
using namespace std;
int getmaxsum(int arr[][3], int row, int col){
    int sum = 0;
    int maxi = -1;
    int rowidx = -1;
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j =0 ; j<col; j++){
            sum = sum+arr[i][j];
        }
        if(sum >maxi){
            sum = maxi;
            rowidx = i;
        }
    }
    return rowidx;
}
int main(){
    int arr[4][3] = {{1,2,3},{2,3,4},{3,8,5},{4,5,6}}; 
    int sum = 0;
    cout<<getmaxsum(arr, 4, 3);
    // for(int i = 0; i<4; i++){
    //     for(int j = 0; j<3; j++){
    //        sum = sum+arr[i][j];
           
    //     }
    //     cout<<sum<<" ";
    //     sum = 0;
    // }
    //   for(int i = 0; i<3; i++){
    //      sum = 0;
    //     for(int j = 0; j<4; j++){
    //        sum = sum+arr[i][j];
           
    //     }
    //     cout<<sum<<" ";
       
    // }
    return 0;
}