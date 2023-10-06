#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>
class graph{
    public:
    unordered_map<T, list<T>>adj;
    void addEdge(T u, T v, bool direction){
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
int main(){
    
 int n;
 cout<<"Enter the number of  nodes"<<endl;
 cin>>n;

 int m;
 cout<<"Enter the number of edges "<<endl;
 cin>>m;
 
 graph<int> g;
 vector<pair<int, int>>ans;
 for (int i = 0; i < m; i++)
 {
    int u, v;
    cin>>u>>v;
    g.addEdge(u,v,0);
    ans[u].first;
    ans[v].second;
    
 }
 for(int i = 0; i<ans.size(); i++){
    cout<<ans[i].first<<" "<<ans[i].second;
 }
//  g.printAdjlist();
    
    return 0;
}