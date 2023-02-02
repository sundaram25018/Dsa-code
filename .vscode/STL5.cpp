#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("sundaram");
    s.push("punit");
     s.push("akash");
     cout<<"top element is "<<s.top()<<endl;
     cout<<"size of element"<<s.size()<<endl;
     s.pop();
     cout<<"top element is "<<s.top()<<endl;
    return 0;
}