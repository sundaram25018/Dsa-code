#include<iostream>
using namespace std;
int main(){
    int m,n;
   m = 3;
   n = 4;
    
    int i, k = 0, l = 0;
 
    // Store given number of rows and columns for later use
    int r = m, c = n;
 
    // A 2D array to store the output to be printed
    char a[m][n];
    char x = 'X'; // Initialize the character to be stored in a[][]
 
    // Fill characters in a[][] in spiral form. Every iteration fills
    // one rectangle of either Xs or Os
    while (k < m && l < n)
    {
        /* Fill the first row from the remaining rows */
        for (i = l; i < n; ++i)
            a[k][i] = x;
        k++;
 
        /* Fill the last column from the remaining columns */
        for (i = k; i < m; ++i)
            a[i][n-1] = x;
        n--;
 
        /* Fill the last row from the remaining rows */
        if (k < m)
        {
            for (i = n-1; i >= l; --i)
                a[m-1][i] = x;
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
                a[i][l] = x;
            l++;
        }
 
        // Flip character for next iteration
        x = (x == '0')? 'X': '0';
    }
 
    // Print the filled matrix
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout <<" "<< a[i][j];
        cout <<"\n";
    }

    return 0;
}