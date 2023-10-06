#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<queue>
using namespace std;
class graph{
    public:
    unordered_map<int, list<int>>adj;
    void addEdge(int u, int v, bool direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }
     void printAdjlist(){
        for (auto i:adj){
            cout<<i.first<<"->";
            for (auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
        
    }
};
void prepareadjlist(unordered_map<int, set<int>>&adjlist,vector<pair<int, int>>&edges ){
    for(int i = 0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjlist[u].insert(v);
        adjlist[v].insert(u);
    }
}
void bfs(unordered_map<int, set<int>>&adjlist,unordered_map<int, bool>visited, vector<int>ans, int nodes){
    queue<int>q;
    q.push(nodes);
    visited[nodes]=1;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);
        for(auto i : adjlist[frontNode]){
            if(visited[i]==false){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}
vector<int> bfsTraversal(int vertex, vector<pair<int, int>>edges){
     unordered_map<int, set<int>>adjlist;
     vector<int>ans;
     unordered_map<int, bool>visited;
     for(int i = 0; i<vertex; i++){
        if(visited[i]==false){
            bfs(adjlist,visited, ans, i);
        }
     }
     return ans;
}
int main(){
    int n;
 cout<<"Enter the number of  nodes"<<endl;
 cin>>n;

 int m;
 cout<<"Enter the number of edges "<<endl;
 cin>>m;

 graph g;
 for (int i = 0; i < m; i++)
 {
    int u, v;
    cin>>u>>v;
    g.addEdge(u,v,0);
 }
//  vector<int>result = bfsTraversal(n, )
    return 0;
}