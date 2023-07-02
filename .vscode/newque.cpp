#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ansP(int arr[], int n ){
    bool flag = true;
    int cnt = 0;
    vector<int>ans;
    for(int i  =0; i<n; i++){
      for(int j = i+1; j<n; j++){
        if(arr[i]==arr[j]){
            
            cnt++;
        }
      }
      ans.push_back(cnt);
      cnt = 0;
    }
    sort(ans.begin(), ans.end());
    for(int  i = 0; i<ans.size(); i++){
        if(ans[i] == ans[i+1]){
            return false;
        }
    }
    return flag;
} 
int main(){
    int arr[] = {1,2,2,1,1,3};
    int n = 6;
    if(ansP(arr, n)){
        cout<<"true hai"<<endl;
    }
    else{
        cout<<"false hai"<<endl;
    }
    return 0;
}