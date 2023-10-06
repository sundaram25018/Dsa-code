#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// undirected graph
bool iscycle(int nodes,unordered_map<int, bool>&visited,unordered_map<int, bool>&dfsvisited,unordered_map<int, list<int>>&adjlist){
    visited[nodes] = true;
    dfsvisited[nodes] = true;
    for(auto i:adjlist[nodes]){
         if(!visited[i]){
            bool cycle = iscycle(i, visited, dfsvisited, adjlist);
            if(cycle){
                return true;
            }
            else if(dfsvisited[i]){
                return true;
            }
         }
         dfsvisited[nodes] = false;
         return false;
    }
}
int detectcycle(int n, vector<pair<int, int>>&edges){
     unordered_map<int, list<int>>adjlist;
     for(int i = 0; i<edges.size(); i++){
         int u = edges[i].first;
         int v = edges[i].second;

         adjlist[u].push_back(v);
     }
     unordered_map<int, bool>visited;
     unordered_map<int, bool>dfsvisited;
     for(int i = 1; i<=n; i++){
        if(!visited[i]){
          bool cycle = iscycle(i, visited, dfsvisited, adjlist);
          if(cycle){
            return 1;
          }
        }
     }
     return 0;
}
int main(){
    vector<pair<int, int>>ele = {{1, 2}, {2, 3}, {3, 4}, {5, 2}};
    int n = 5;
    cout<<detectcycle(n, ele);
   

    return 0;
}