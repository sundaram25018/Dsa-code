#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(10);
    pq.push(12);
    pq.push(6);
    pq.push(8);
    pq.push(11);
    pq.pop();
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}