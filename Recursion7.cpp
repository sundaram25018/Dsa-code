#include<iostream>
#include<vector>
using namespace std;

    void solve(string digits,string output,int index,vector<string>&ans,string mapping[] ){
    if(index>=digits.length()){
         ans.push_back(output);
         return;
         }
         int number = digits[index] = '0';
         string value = mapping[number];

         for (int i = 0; i < value.length(); i++)
         {
             output.push_back(value[i]);
             solve(digits,output,index+1,ans,mapping);
             output.pop_back();
         }
         
}

vector<string>lettercombination(string digits){
vector<string>ans;
if(digits.length()==0){
    return ans;
}
string output;
int index = 0;
string mapping[] = {"", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
solve(digits,output,index,ans,mapping);
}


int main(){ 
   vector<string>ans = lettercombination("23");
 for(string i:ans){
        cout<<"vector is "<<i<<" ";
 }
    
   
 

  return 0;
    }