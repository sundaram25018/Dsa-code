#include <iostream>
using namespace std;
char getmaxocc(char s[], int n)
{
    int arr[26] = {0};
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
             num = 'a' - ch;
        }
        else
        {
            num = 'A' - ch;
        }
        arr[num]++;
    }
    int maxi = -1, ans = 0;
    for(int i = 0; i<n; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
        maxi = max(maxi, arr[i]);
    }
}
int main()
{
    char arr[26] = {'soon'};
    cout<<getmaxocc(arr,26);

    
    return 0;
}