// #include<iostream>
// #include<vector>
// using namespace std;
// int fib(int n, vector<int>&v){
//    if(n<=1){
//     return n;
//    }
//    if(v[n]!= -1){
//     return v[n];
//    }
//    v[n] =  fib(n-1, v)+fib(n-2, v);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n+1);
//     for(int i = 0; i<=n; i++){
//         v[i] = -1;
//     }
//     cout<<fib(n, v);
//     return 0;
// }

// optimal

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int>dp(n+1);
//     dp[0] = 0;
//     dp[1] = 1;
    
//     for( int i = 2; i<=n; i++){
//         dp[i] = dp[i-1]+dp[i-2];
//     }
//     cout<<dp[n];
//     return 0;
// }

// mor optimal
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    int prev1 = 1;
    int prev2 = 0;
    if(n==0){
       cout<<prev2;
    }
    for( int i = 2; i<=n; i++){
        int curr = prev1+prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout<<prev1;
    return 0;
}