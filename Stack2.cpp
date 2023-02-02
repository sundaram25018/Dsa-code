#include<iostream>
#include<stack>
using namespace std;
int main(){
  string str = "babbar";
  stack<char>s;
   for (int i = 0; i < str.length(); i++)
   {
     char ch = str[i];
  s.push(ch);
   }

   string ans = "";
   while (!s.empty())
   {
   cout<<s.top();
   s.pop();
   }

    return 0;
}


// #include<iostream>
// #include<stack>
// using namespace std;
// void insertAtbottom(stack<int>&s, int ele){
//   if(s.empty()){
//     s.push(ele);
//     return;
//   }
//   int topele = s.top();
//   s.pop();
//   insertAtbottom(s,ele);
//   s.push(topele);
// }
// void reverse(stack<int>&s){
// if(s.empty()){
//   return;
// }

// int ele = s.top();
// s.pop();
// reverse(s);
// insertAtbottom(s,ele);

// }
// int main(){
//   stack<int>s;
//   s.push(1);
//   s.push(2);
//   s.push(3);
//   s.push(4);
//   reverse(s);
//   while (!s.empty())
//   {
//     cout<<s.top()<<" ";
//     s.pop();
//   }cout<<endl;
  
//   return 0;
// } 
// #include<iostream>
// #include<stack>
// using namespace std;
// void solve(stack<int>&inputStack, int count, int size){
//   if(count == size/2){
//     inputStack.pop();
//     return;
//   }
//   int num = inputStack.top();
//   inputStack.pop();
//   solve(inputStack, count+1, size);
//   inputStack.push(num);
// }
// void deleteMid(stack<int>&inputStack, int count, int n){
//   int count = 0;
//   solve(inputStack, count, n );
// }
// int main(){
//   stack<int>s;
//   s.push(4);
//     s.push(5);
//       s.push(2);
//         s.push(7);
//           s.push(9);
//   while (!s.empty()){
//   cout<<s.top()<<" "; 
//   s.pop();
//   }cout<<endl;
//   int count = 5;
//   int size = 5;
//   deleteMid(s, count, size);
//    while (!s.empty()){
//   cout<<s.top()<<" "; 
//   s.pop();
//   }cout<<endl;
  

//   return 0;
// }