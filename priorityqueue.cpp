// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int>pq;
//     pq.push(12);
//     pq.push(5);
//     pq.push(787);
//     pq.push(1);
//     pq.push(23);
   
//     while (!pq.empty())
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
    
//     return 0;
// }

/// min heap
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     priority_queue<int, vector<int>, greater<int>>pq;
//    pq.push(3);
//    pq.push(5);
//    pq.push(6);
//    pq.pop();
   
//     while (!pq.empty())
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }

    
//     return 0;
// }


#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<string>pq;
    pq.push("i");
    pq.push("love");
    pq.push("you");
    pq.push("sjs");
    pq.push("sundy");
   
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    return 0;
}
