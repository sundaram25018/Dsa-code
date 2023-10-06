// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(vector<int>&ans, int n, vector<int>&dp){
//     if(n==0){
//         return ans[0];
//     }
//     if(n==1){
//         return ans[1];
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     dp[n] = ans[n]+ min(solve(ans, n-1, dp), solve(ans, n-2, dp));
//     return dp[n];

// }
// int climbcost(vector<int>&ans){
//    int n = ans.size();
//    vector<int>dp(n+1, -1);
//    int cost = min(solve(ans, n-1, dp), solve(ans, n-2, dp));
//    return cost;
// }
// int main(){
//     vector<int>ans = {1, 100, 1,1,1,100,1,1,100,1};
//     int n = 5;
//     cout<<climbcost(ans);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(vector<int>&ans, int n){
//     vector<int>dp(n+1);
//     dp[0] = ans[0];
//     dp[1] = ans[1];
//     for(int i  = 2; i<n; i++){
//        dp[i] = ans[i]+ min(dp[i-1], dp[i-2]);
//     }
//     int result = min(dp[n-1], dp[n-2]);
   
//     return result;

// }
// int climbcost(vector<int>&ans){
//    int n = ans.size();
//    return solve(ans, n);
// }
// int main(){
//     vector<int>ans = {1, 100, 1,1,1,100,1,1,100,1};
//     int n = 5;
//     cout<<climbcost(ans);
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&ans, int n){
    vector<int>dp(n+1);
    int prev2 = ans[0];
    int prev1 = ans[1];
    for(int i  = 2; i<n; i++){
       int curr = ans[i]+min(prev1, prev2);
       prev2 = prev1;
       prev1 = curr;
    }
    int result = min(prev1, prev2);
   
    return result;

}
int climbcost(vector<int>&ans){
   int n = ans.size();
   return solve(ans, n);
}
int main(){
    vector<int>ans = {1, 100, 1,1,1,100,1,1,100,1};
    int n = 5;
    cout<<climbcost(ans);
    return 0;
}