// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i<n; i++){
//         for(int j = 1; j<=i; j++){
//               cout<<j;
//         }
      
//         cout<<endl;
//     }
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1; i<n; i++){
//         for(int j = 1; j<=i; j++){
//               cout<<i;
//         }
      
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        
        for(int j = 0; j<n-i+1; j++){
         cout<<" ";
    }
    for(int j = 0; j<2*i+1; j++){
   cout<<"*";
    }
      for(int j = 0; j<n-i+1; j++){
         cout<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}