// #include<iostream>
// using namespace std;
// void reachHome(int src,int dest){
//     cout<<"Source "<<src<<" destination "<<dest<<endl;
//     if(src == dest){
//         cout<<"pahuch gya"<<endl;

//         return;
//     }
//     src++;
//     reachHome(src,dest);
// }
// int main(){
//     int src = 1;
//     int dest = 10;
//     cout<<endl;
//     reachHome(src,dest);
//     return 0;
// }
//  

#include<iostream>
using namespace std;
void TowerOfHunnai(int n, string src, string help, string des){
    if(n==1){
        cout<<"Transfer disk "<<n<<" from "<<src<<" to "<<des<<endl;
        return;
    }
    TowerOfHunnai(n-1,src,des,help);
   cout<<"Transfer disk "<<n<<" from "<<src<<" to "<<des<<endl;
   TowerOfHunnai(n-1,help,src,des);
}
int main(){
    int n; 
    cin>>n;
    string S;
    string H;
    string D;
    TowerOfHunnai(n,"S","H","D");
    return 0;
}

//  fabonacci sequence


// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//      if(n==1){
//         return 1;
//     }

//     int ans = fib(n-1)+fib(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//    cout<<fib(n)<<endl;
//     return 0;
// }


// climb stair

// #include<iostream>
// using namespace std;
// int climbStair(int n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return 1;
//     }
//     int ans = climbStair(n-1)+climbStair(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<climbStair(n)<<endl;
//     return 0;
// }