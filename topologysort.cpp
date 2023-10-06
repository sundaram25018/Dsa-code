#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
#include<list>
using namespace std;
void solve(int idx,unordered_map<int, bool>&visited,unordered_map<int, list<int>>&adj, stack<int>&s){
    visited[idx] = true;
    for(auto i: adj[idx]){
        if(!visited[idx]){
            solve(i, visited, adj, s);
        }
    }
    s.push(idx);
}
vector<int> topologySort(int n, vector<vector<int>>&edges){
    unordered_map<int, list<int>>adj;
    for(int i = 0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }
    unordered_map<int, bool>visited;
    stack<int>s;
    for(int i = 0; i<n; i++){
        if(!visited[i]){
            solve(i, visited, adj, s);
        }
    }
    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main(){
    
    return 0;
}