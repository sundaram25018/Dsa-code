// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void reverseQueue(queue<int>& Queue)
// {
//     stack<int> Stack;
//     while (!Queue.empty()) {
//         Stack.push(Queue.front());
//         Queue.pop();
//     }
//     while (!Stack.empty()) {
//         Queue.push(Stack.top());
//         Stack.pop();
//     }
// }
// void display(queue<int>q){
//     while (!q.empty())
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
    
// }
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     display(q);
//     reverseQueue(q);
//     while (!q.empty())
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }
    
//     return 0;
// }

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// queue<int>reverseQueue(queue<int>Queue)
// {
//     stack<int> s;
//     while (!Queue.empty()) {
//        int element = Queue.front();
//        Queue.pop();
//        s.push(element);
//     }
//     while (!s.empty()) {
//         int element = s.top();
//         s.pop();
//         Queue.push(element);
//     }
//     return Queue;
// }
// void display(queue<int>q){
//     while (!q.empty())
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }

// }
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     display(q);
//     cout<<endl<<"after reversing"<<endl;
//     reverseQueue(q);
//     display(q);
    
//     return 0;
// }
// // getoutput: 1 2 3 4 5
// // desire output: 5 4 3 2 1

// #include<iostream>
// #define pi 3.14
// using namespace std;
// int squareArea(int &);
// int circleArea(int &);
// void main(){
//     int a-10;
//     cout<<squareArea(a)<<" ";
//     cout<<circleArea(a)<<" ";
//     cout<<a<<endl;
//     return 0;
// }

// #include<iostream>
 
// using namespace std;
// int N = 10;
 
// int main()
// {
//   static int x = 1;
//   if (cout << x << " " && x++ <= N && main())
//   { }
//   return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,5,7,8};
    
    return 0;
}