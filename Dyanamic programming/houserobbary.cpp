#include<iostream>
#include<vector>
using namespace std;
int maximumsum(vector<int>&arr){
    int n = arr.size();
    vector<int>dp(n,0);
    int prev2 = 0;
    int prev1 = arr[0];
    for(int i = 1; i<n; i++){
        int incl = prev2+arr[i];
        int exlc = prev1+0;
        int ans = max(incl, exlc);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
int houserobbery(vector<int>&vec){
    int n = vec.size();
    if(n==1){
        return vec[0];
    }
    vector<int>first, second;
    for(int i=0; i<n; i++){
        if(i!=n-1){
            first.push_back(vec[i]);
        }
        if(i!=0){
            second.push_back(vec[i]);
        }
    }
    return max(maximumsum(first), maximumsum(second));
}
int main(){
    vector<int>vec =  {8,6,1,8,3};
    cout<<houserobbery(vec);
    return 0;
}