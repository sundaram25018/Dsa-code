// maximum sum of non adjacent
#include<iostream>
using namespace std;
int maximumsum(int arr[], int n, int i){
    if(i>=n){
        return 0;
    }
    int incl = maximumsum(arr, n, i+2)+arr[i];
    int excl = maximumsum(arr, n, i+1)+ 0;
    return max(incl, excl);
}
int main(){
    int arr[] = {8,6,1,8,3};
    int n = 5;
    cout<<maximumsum(arr, n, 0);
    return 0;
}


// #include<iostream>
// #include<vector>
// using namespace std;
// int maximumsum(vector<int>&arr){
//     int n = arr.size();
//     vector<int>dp(n,0);
//     dp[0] = arr[0];
//     for(int i = 1; i<n; i++){
//         int incl = dp[i-2]+arr[i];
//         int exlc = dp[i-1]+0;
//         dp[i] = max(incl, exlc);
//     }
//     return dp[n-1];
// }
// int main(){
//     vector<int>arr =  {8,6,1,8,3};
//     cout<<maximumsum(arr);
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int maximumsum(vector<int>&arr){
//     int n = arr.size();
//     vector<int>dp(n,0);
//     int prev2 = 0;
//     int prev1 = arr[0];
//     for(int i = 1; i<n; i++){
//         int incl = prev2+arr[i];
//         int exlc = prev1+0;
//         int ans = max(incl, exlc);
//         prev2 = prev1;
//         prev1 = ans;
//     }
//     return prev1;
// }
// int main(){
//     vector<int>arr =  {1,5,3};
//     cout<<maximumsum(arr);
//     return 0;
// }