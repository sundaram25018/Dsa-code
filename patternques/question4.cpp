// A
// AB
// ABC
// ABCD
// ABCDE

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0; i<n; i++){
//         for(char ch = 'A'; ch<='A'+i; ch++){
//             cout<<ch;
//        }
//        cout<<endl;
//     }
//     return 0;
// }

// ABCDE
// ABCD
// ABC
// AB
// A
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = n; i>0; i--){
//         for(char ch = 'A'; ch<'A'+i; ch++){
//             cout<<ch;
//        }
//        cout<<endl;
//     }
//     return 0;
// }

// A
// BB
// CCC
// DDDD
// EEEEE

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0; i<n; i++){
//           char ch = 'A'+i;
//         for(int j = 0; j<=i; j++){
//             cout<<ch;
//        }
//        cout<<endl;
//     }
//     return 0;
// }

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
   
//     for (int i = 0; i <n; i++)
//     {
//      for(int j = 0; j<n-i-1; j++){
//         cout<<" ";
//      }
//        char ch = 'A';
//        int breakpoint = (2*i+1)/2;
//      for(int j = 1; j<=2*i+1; j++){
//         cout<<ch;
//         if(j<=breakpoint){
//             ch++;
//         }
//         else{
//             ch--;
//         }
//      }
//      for(int j = 0; j<n-i-1; j++){
//         cout<<" ";
//      }
//       cout<<endl;  
//     }
//     return 0;
// }

// E
// D E
// C D E
// B C D E
// A B C D E

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
   
//      for(int i = 0; i<n; i++){
//           for(char ch = 'E'-i; ch<='E'; ch++){
//             cout<<ch<<" ";
//           }
//           cout<<endl;
//      }
//     return 0;
// }



