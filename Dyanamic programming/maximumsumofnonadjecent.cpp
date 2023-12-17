// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(vector<int>&v, int n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return v[0];
//     }
//     int incl = solve(v,n-2)+v[n];
//     int excl = solve(v,n-1)+0;
//     return max(incl,excl);
// }
// int maxsum(vector<int>&v){
//     int n = v.size();
//     int ans = solve(v, n-1);
//     return ans;
// }
// int main(){
//     vector<int>v = {2,1,4,9};
//     int n = v.size();
//    cout<<maxsum(v)<<endl;
//     return 0;
// }

/// memoisation
// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(vector<int>&v, int n, vector<int>&dp){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return v[0];
//     }
//     if(dp[n]!= -1){
//         return dp[n];
//     }
//     int incl = solve(v,n-2, dp)+v[n];
//     int excl = solve(v,n-1, dp)+0;
//     dp[n] =  max(incl,excl);
//     return dp[n];
// }
// int maxsum(vector<int>&v){
//     int n = v.size();
//     vector<int>dp(n, -1);
//     int ans = solve(v, n-1, dp);
//     return ans;
// }
// int main(){
//     vector<int>v = {2,1,4,9};
//     int n = v.size();
//    cout<<maxsum(v)<<endl;
//     return 0;
// }
// tabulation

// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(vector<int>&v){
//     int n = v.size();
//     vector<int>dp(n,0);
//     dp[0] = v[0];
//     for(int i = 1; i<n; i++){
//         int incl = dp[i-2]+v[i];
//         int excl = dp[i-1]+0;
//         dp[i] = max(incl, excl);
//     }
//     return dp[n-1];
// }
// int maxsum(vector<int>&v){
  
//     int ans = solve(v); 
//     return ans;
// }
// int main(){
//     vector<int>v = {2,1,4,9};
//     int n = v.size();
//    cout<<maxsum(v)<<endl;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&v){
    int n = v.size();
    int prev2 = 0;
    int prev1 = v[0];
    int ans = 0;

    for(int i = 1; i<n; i++){
        int incl = prev2+v[i];
        int excl = prev1+0;
        ans = max(incl, excl);
        prev2 = prev1;
        prev1 = ans;
        
    }
    return ans;
}
int maxsum(vector<int>&v){
  
    int ans = solve(v); 
    return ans;
}
int main(){
    vector<int>v = {2,1,4,9};
    int n = v.size();
   cout<<maxsum(v)<<endl;
    return 0;
}
