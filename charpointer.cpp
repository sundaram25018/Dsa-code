// #include<iostream>
// using namespace std;
// int main(){
//     char ch[10] = "abcd";
//     cout<<ch<<endl;
//     char *c = &ch[0];
//     cout<<c<<endl;
//     return 0;
// }


// pointer in function

// #include<iostream>
// using namespace std;
// void print(int *p){
//     // cout<<*p<<endl;
//     cout<<p<<endl;
// }
// int main(){
//     int value = 5;
//     int *p = &value;
//     print(p);
//     return 0;
// }

#include<iostream>
#include <typeinfo>
using namespace std;
int main(){
    string s = "23";
  
    // Explicit conversion from double to int 
    cout<<stoi(s); 
    return 0;
}