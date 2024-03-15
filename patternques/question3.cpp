// 1
// 01
// 101
// 0101
// 10101


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int stat = 1;
//     for(int i = 0; i<n; i++){
//         if(i%2==0){
//             stat = 1;
//         }
//         else{
//             stat = 0;
//         }
//         for(int j = 0; j<=i; j++){
//             cout<<stat;
//             stat = 1-stat;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int space = 2*(n-1);
//     for(int i = 1; i<=n; i++){
        
//         for(int j = 1; j<=i; j++){
//             cout<<j;
//         }

//         for(int j = 1; j<=space; j++){
//             cout<<" ";
//         }
//         for(int j = i; j>=1; j--){
//             cout<<j;
//         }
//         cout<<endl;
//         space-=2;
//     }
//     return 0;
// }

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int space = 0;
//      for(int i = n; i>=1; i--){
        
//         for(int j = 1; j<=i; j++){
//             cout<<"*";
//         }

//         for(int j = 1; j<=space; j++){
//             cout<<" ";
//         }
//         for(int j = i; j>=1; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//         space+=2;
//     }
//       int space1 = 2*(n-1);
//     for(int i = 1; i<=n; i++){
        
//         for(int j = 1; j<=i; j++){
//             cout<<"*";
//         }

//         for(int j = 1; j<=space1; j++){
//             cout<<" ";
//         }
//         for(int j = i; j>=1; j--){
//             cout<<"*";
//         }
//         cout<<endl;
//         space1-=2;
//     }
//     return 0;
// }

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *


#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
      int space1 = 2*(n-1);
    for(int i = 1; i<=n; i++){
        
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }

        for(int j = 1; j<=space1; j++){
            cout<<" ";
        }
        for(int j = i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
        space1-=2;
    }

    int space = 2;
     for(int i = n; i>=1; i--){
        
        for(int j = 1; j<i; j++){
            cout<<"*";
        }

        for(int j = 1; j<=space; j++){
            cout<<" ";
        }
        for(int j = i; j>1; j--){
            cout<<"*";
        }
        cout<<endl;
        space+=2;
    }
    return 0;
}