// #include<iostream>
// using namespace std;
// int factorial(int n){

//     if(n==0){
//         return 1;
//     }
//     // int first = factorial(n-1);
//     // int second = n*first;

//     // return second;

//     // or
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = factorial(n);
//     cout<<ans<<endl;

//     return 0;
// }

// // power 

#include<iostream>
using namespace std;
double power(int n){
    if(n==0){
        return 1;
    }

    // int smaller = power(n-1);
    // int bigger = 2*smaller;
    // return bigger;
     if(n < 0){
       double ans =  1/(2*power(abs(n)-1));
       return ans;
     }
     else{
           return 2*power(n-1);
     }
    
}
int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;
    return 0;
}

// counting

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return ;

//     }
//     cout<<n<<endl;
//     print(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<endl;
// print(n);
//     return 0;
// }