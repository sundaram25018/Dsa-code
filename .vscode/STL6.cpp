#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>s;
        s.push("sundaram");
    s.push("punit");
     s.push("akash");
     cout<<"top element is "<<s.front()<<endl;
     s.pop();
     cout<<"first element is "<<s.front()<<endl;

    return 0;
}