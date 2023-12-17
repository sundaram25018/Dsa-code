#include<iostream>
#include<unordered_map>
using namespace std;
int largestcount(int arr[], int n){
    unordered_map<int, int>mp;
    for(int i = 0; i<n; i++){
        mp[arr[i]]++;
    }
    int maxi = 0;
    int res = -1;
    for(auto m:mp){
        if(m.second > maxi){
            res = m.first;
            maxi = m.second;
        }
    }
    return res;

}
int getmax(int arr[], int n){
    int res =  0;
    int cnt = 1;
    for(int i = 1; i<n; i ++){
        if(arr[i]==arr[res]){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt == 0){
            res = i;
            cnt = 1;
        }
    }
    return arr[res];
}
int main(){
    int arr[] = {2,3,4,2,2,3};
    int n = 6;
    cout<<largestcount(arr, n)<<endl;
    cout<<largestcount(arr, n)<<endl;;
    return 0;
}