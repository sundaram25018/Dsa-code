#include<iostream>
#define ASCII_SIZE 256
#include<unordered_map>
using namespace std;
char getmax(string s){
    int count[ASCII_SIZE]={0};
    int len = s.length();
    int max = 0;
    char result;
    for(int i = 0; i<len; i++){
        count[s[i]]++;
        if(max<count[s[i]]){
            max = count[s[i]];
            result = s[i];
        }
    }
    return result;
}
// int getmax(int arr[], int n){
//     unordered_map<int, int>count;
//     for(int i = 0; i<n; i++){
//         count[arr[i]]++;

//     }
// }
int main(){
    string s  ="aabcdhdjisa";
    cout<<getmax(s);
    return 0;
}