// #include<iostream>
// using namespace std;
// int solve(int n, int a, int b, int c){
//     if(n==0){
//         return 0;
//     }
//     if(n<0){
//         return INT32_MIN;
//     }
//     int x = solve(n-a, a, b, c)+1;
//     int y = solve(n-b, a, b, c)+1;
//     int z = solve(n-c, a, b, c)+1;

//     return max(x, max(y, z));
// }
// int cutSegment(int n, int a, int b, int c){
//     int ans = solve(n, a,b,c);
//     if(ans<0){
//         return 0;
//     }
//     else{
//         return ans;
//     }
// }
// int main(){
//     cout<<cutSegment(7,4,2,3);
//     return 0;
// }
//memoastion
// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(int n, int a, int b, int c, vector<int>&dp){
//     if(n==0){
//         return 0;
//     }
//     if(n<0){
//         return INT32_MIN;
//     }
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     int x = solve(n-a, a, b, c, dp)+1;
//     int y = solve(n-b, a, b, c, dp)+1;
//     int z = solve(n-c, a, b, c, dp)+1;

//     dp[n] =  max(x, max(y, z));
//     return dp[n];
// }
// int cutSegment(int n, int a, int b, int c){
//     vector<int>dp(n+1, -1);
//     int ans = solve(n, a,b,c, dp);
//     if(ans<0){
//         return 0;
//     }
//     else{
//         return ans;
//     }
// }
// int main(){
//     cout<<cutSegment(7,4,2,3);
//     return 0;
// }
// tabulation

#include<iostream>
#include<vector>
using namespace std;
int solve(int n, int a, int b, int c){
    vector<int> dp(n+1, INT32_MIN);
   dp[0] = 0;

   for(int i = 1; i<=n; i++){
    if((i-a) >=0){
    dp[i] = max(dp[i], dp[i-a]+1);

    }
     if((i-b) >=0){
    dp[i] = max(dp[i], dp[i-b]+1);
    
    }
     if((i-c) >=0){
    dp[i] = max(dp[i], dp[i-c]+1);
    
    }
   }
    if(dp[n]<0){
        return 0;
    }
    else{
        return dp[n];
    }
}
int cutSegment(int n, int a, int b, int c){
   return solve(n, a, b, c);
}
int main(){
    cout<<cutSegment(7,4,2,3);
    return 0;
}