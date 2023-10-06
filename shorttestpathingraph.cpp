#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
#include<list>
using namespace std;
vector<int>Shortespath(vector<pair<int, int>>edges, int n, int m, int s, int t){
    unordered_map<int, list<int>>adj;
    for(int i = 0; i <edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int, bool>visited;
    unordered_map<int, bool>parent;
    queue<int>q;
    q.push(s);
    parent[s] = -1;
    visited[s] = true;
    while(!q.empty()){
        int front = q.front();
        q.pop();
        for(auto i:adj[front]){
            if(!visited[i]){
                visited[i] = true;
                parent[i] = front;
                q.push(i);
            }
        }
    }
    // shortes path prepare
    vector<int>ans;
    int curr = t;
    ans.push_back(t);
    while (curr!= s)
    {
        curr = parent[curr];
        ans.push_back(curr);
    }
    reverse(ans.begin(), ans.end());
    return ans;

}
int main(){
    
    return 0;
}