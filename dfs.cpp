#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std;
void solve(int idx, unordered_map<int, bool>&visited, unordered_map<int, list<int>>&adj,vector<int>&ele){
    ele.push_back(idx);
    visited[idx] = true;
    for(auto i : adj[idx]){
        if(!visited[i]){
            solve(i, visited, adj, ele);
        }
    }

}
vector<vector<int>>dfs(int n, vector<pair<int, int>>&edges){
    unordered_map<int, list<int>>adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int, bool>visited;
    vector<vector<int>>ans;
    for(int i = 0; i<n; i++){
        if(!visited[i]){
          vector<int>ele;
          solve(i, visited, adj, ele);
          ans.push_back(ele);
        }
    }
    return ans;
}
int main(){
     vector<pair<int, int>>ele = {{1, 2}, {2, 3}, {3, 4}, {5, 2}};
    int n = 5;
    vector<vector<int>>ans = dfs(n, ele);
    for(int i =  0; i<ans.size(); i++)
    
    return 0;
}