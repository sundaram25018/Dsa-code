#include<iostream>
using namespace std;
int reversenumber(int n){
   int rev = 0;
   while (n!=0)
   {
    if((n < INT32_MIN/10 )|| (n  > INT32_MAX/10)){
   return 0;
    }
    int bit =n%10;
    rev = rev*10+bit;
    
    n = n/10;
   }
   return rev;
    
}
int main(){
    int n=-123;
cout<<reversenumber(n);
    return 0;
}
