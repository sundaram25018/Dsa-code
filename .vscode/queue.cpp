// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(11);
//     cout<<" front element is "<<q.front()<<endl;
//       q.push(12);
//         q.push(13);
//           q.push(14);
//           cout<<"size of queue is "<<q.size()<<endl;
//          q.pop();
//          cout<<"size of queue is "<<q.size()<<endl;
//          cout<<"last element is "<<q.back()<<endl;
//     return 0;
// }

// #include<iostream>
// #include<queue>
// using namespace std;
// class Queue{
//     int *arr;
//     int qfront;
//     int rear;
//     int size;
//     public:
//     Queue(){
// size = 100001;
// arr = new int[size];
// qfront = 0;
// rear = 0;
//  }
//  bool isempty(){
//      if(qfront==rear){
//          return true;
//      }
//      else{
//          return false;
//      }
//  }
//  void enqueue(int data){
//      if(rear == size){
//          cout<<"queue is full"<<endl;

//      }
//      else{
//          arr[rear] = data;
//          rear++;
//      }

//  }
//  int dequeue(){
//      if(qfront==rear){
//          return -1;

//      }
//      else{
//          int ans = arr[qfront];
//       arr[qfront] = -1;
//       qfront++;
//       if(qfront==rear){
//           qfront=0;
//           rear=0;
//       }
//       return ans;
//      }
//  }
// int front(){
//    if(qfront==rear){
//        return -1;
//    }
//    else{
//       return arr[qfront];
//    }
// }

// };
// int main(){
//     Queue q;
//     q.enqueue(34);
//     q.enqueue(14);
//     q.enqueue(24);
//     q.enqueue(9);
//       q.dequeue();

//     while (!q.isempty())
//     {
//         cout<<" "<<q.front();
//         q.dequeue();
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
class circularQueue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    circularQueue(int n)
    {
        size = 100001;
        arr = new int[size];
        qfront = rear = -1;
    }
    bool isempty(){
        if(qfront==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool enqueue(int value){
        if((qfront==0 && rear==size-1)|| (rear==(qfront-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return false;

        }
        else if(qfront == -1){
         qfront=rear=0;
         arr[rear] = value;
        }
        else if(rear == size-1 && qfront!=0){
            rear = 0;
            arr[rear] = value;
            
        }
        else{
            rear++;
            
        }
        arr[rear]=value;
        return true;
    }
    int Dequeue(){
        if(qfront==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[qfront];
        arr[qfront] = -1;
        if(qfront == rear){
            qfront = rear = -1;

        }
        else if(qfront==size-1){
            qfront = 0;
        }
        else{
            qfront++;
        }
        return ans;
    }
    };
    int main()
    {
      circularQueue q(4);
      q.enqueue(34);
      q.enqueue(24);
      q.enqueue(44);
      q.enqueue(54);
      
        return 0;
    }