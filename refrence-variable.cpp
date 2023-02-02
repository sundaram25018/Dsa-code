#include<iostream>
using namespace std;
// void update(int n){
//     n++;
// }

// void update1(int& n){
//      n++;
//  }
int main(){
    // int i = 5;
    // // refrence create //
    // int& j = i;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<j<<endl;

    // int n = 5;
    // cout<<" Befor "<<n<<endl;
    // // update(n);
    // // cout<<"after "<<n<<endl;
    //     update1(n); 
    // cout<<"after "<<n<<endl;

    char ch = 'r';
    cout<<sizeof(ch)<<endl;
    char*c = &ch;
    cout<<sizeof(c)<<endl;

    return 0;
}