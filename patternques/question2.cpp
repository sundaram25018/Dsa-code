// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i<=n; i++){
//          for(int j = 1; j<=i; j++){
//                cout<<j<<" ";
//          }
//          cout<<endl;
//     }
//     return 0;
// }

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i<=n; i++){
//          for(int j = 1; j<=i; j++){
//                cout<<i<<" ";
//          }
//          cout<<endl;
//     }
//     return 0;
// }

// ****
// ***
// **
// *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0; i<=n; i++){
//          for(int j = 1; j<n-i; j++){
//                cout<<"*";
//          }
//          cout<<endl;
//     }
//     return 0;
// }

// 1234
// 123
// 12
// 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i = 0; i<=n; i++){
//          for(int j = 1; j<n-i; j++){
//                cout<<j;
//          }
//          cout<<endl;
//     }
//     return 0;
// }


// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= i; j++)
//         {
//             cout<< count << " ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// *****
// *   *
// *   *
// *   *
// *****

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <=n; j++)
//         {
//             if(j == 1 || j == n ||i == 1 || i == n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     *
//    ***
//   *****
//  *******
// *********

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
    
//     for (int i = 0; i <n; i++)
//     {
//      for(int j = 0; j<n-i-1; j++){
//         cout<<" ";
//      }
//      for(int j = 0; j<2*i+1; j++){
//         cout<<"*";
//      }
//      for(int j = 0; j<n-i-1; j++){
//         cout<<" ";
//      }
//       cout<<endl;  
//     }
//     return 0;
// }

//  ***********
//   *********
//    *******
//     *****
//      ***
//       *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
    
//     for (int i = n; i >=0; i--)
//     {
//      for(int j = 0; j<n-i+1; j++){
//         cout<<" ";
//      }
//      for(int j = 0; j<2*i+1; j++){
//         cout<<"*";
//      }
//      for(int j = 0; j<n-i+1; j++){
//         cout<<" ";
//      }
//       cout<<endl;  
//     }
//     return 0;
// }


//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i <n; i++)
//     {
//      for(int j = 0; j<n-i-1; j++){
//         cout<<" ";
//      }
//      for(int j = 0; j<2*i+1; j++){
//         cout<<"*";
//      }
//      for(int j = 0; j<n-i-1; j++){
//         cout<<" ";
//      }
//       cout<<endl;  
//     }
    
//     for (int i = n-1; i >=0; i--)
//     {
//      for(int j = 0; j<n-i-1; j++){
//         cout<<" ";
//      }
//      for(int j = 0; j<2*i+1; j++){
//         cout<<"*";
//      }
//      for(int j = 0; j<n-i-1; j++){
//         cout<<" ";
//      }
//       cout<<endl;  
//     }
//     return 0;
// }

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//        for(int i=1;i<=n;i++){ 

//     for(int j=1;j<=i;j++){

//     cout <<"*";

// }
//         cout <<endl; 
//     }
//     for(int i=1;i<=n-1;i++){ 

//     for(int j=1;j<=n-i;j++){

//     cout <<"*";

// }
//         cout <<endl; 
//     }
//     return 0;
// }





