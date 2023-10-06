#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<list>
using namespace std;
vector<int>BfsTopology(vector<vector<int>>&edges, int v, int e){
     unordered_map<int, list<int>>adj;
    for(int i = 0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }
    vector<int>indegree;
    for(auto i : adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    queue<int>q;
    for(int i = 0; i<v; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int>ans;
    while(!q.empty()){
        int ele = q.front();
        q.pop();
        ans.push_back(ele);
          for(auto i: adj[ele]){
             indegree[i]--;
             if(indegree[i]==0){
                q.push(i);
             }
    }
    }
    return ans;
}
int main(){
    
    return 0;
}