// #include<iostream>
// #include<stack>
// using namespace std;
// class Stack{
//     public:
// int *arr;
// int top;
// int size;

// Stack(int size){
//   this->size=size;
//   arr = new int[size];
//   top = -1;  
// }
// void push(int element){
// if(size-top > 1){
//     top++;
//     arr[top] = element;
// }
// else{
//     cout<<"Stack overflow"<<endl;
// }
// }
// void pop(){
// if(top>=0){
//     top--;
// }
// else{ 
//     cout<<"Stack underflow"<<endl;
// }
// }
// int peek(){
// if(top>=0){

//     return arr[top];
// }
// else{
//     cout<<"Stack is empty"<<endl;
//     return -1;
// }
// }
// bool isempty(){
// if(top == -1){
//     return true;
// }

// else{
//     return false;
// }
// }
// };
// int main(){
//     Stack st(6);
//     st.push(33);
//     st.push(13);
//     st.push(34);
//      st.push(14);
//       st.push(24);
//        st.push(30);
  
// cout<<endl<<st.peek()<<endl;
//  while (!st.isempty())
//     {
//         cout<<" "<<st.peek();
//         st.pop();
//     }
    
//     //  stack<int>s;
//     //  s.push(2);
//     //     s.push(3);
//     //        s.push(4);
//     //        s.pop();
//     //        cout<<"printing top element "<<s.top()<<endl;
//     //        if (s.empty())
//     //        {
//     //            cout<<"stack is not empty"<<endl;
//     //        }
//     //        else{
//     //            cout<<"stack is not empty"<<endl;
//     //        }
//     //        cout<<"size of stack is "<<s.size()<<endl;
           
//     return 0;
// }

#include<iostream>
using namespace std;
 class Stack{
        public:
         int* arr;
         int n;
         int top;
         Stack(int n){
             this->n = n;
             arr = new int[n];
             top = -1;
         }
         void push(int element){
             if(top == n-1){
                 cout<<"Stack OverFlow"<<endl;
                 return;
             }
             top++;
             arr[top] = element;
         }

         void pop(){
             if(top == -1){
                 cout<<"Stack UnderFlow"<<endl;
                 return;
             }
             top--;
         }
         int peak(){
           if(top == -1){
                 cout<<"Stack is empty"<<endl;
                 return -1;
             }  
             return arr[top];
         }
         bool empty(){
             if(top == -1){
                 return true;
             }
             else{
                 return false;
             }
         }
    };
int main(){
   Stack st(5);
   st.push(34);
   st.push(24);
   st.push(14);
   st.push(12);
   
   cout<<st.empty()<<endl;
   cout<<st.peak()<<endl;
   
   while (!st.empty())
   {
       cout<<st.peak()<<" ";
       st.pop();
   }
   
   

    return 0;
}