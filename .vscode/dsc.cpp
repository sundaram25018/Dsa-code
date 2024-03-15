#include <iostream>
using namespace std;


int main()
{
    string s = "c=a+b123$#";
    string integer = "1234567890";
    string special = "!/?$#&|";
    string operators = "+-=/*";
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        for (int j = 0; j < 52; j++)
        {
            if (ch == integer[j] && j < integer.length())
            {
                cout << "INTEGER : " << ch << endl;
            }
            else if (ch == special[j] && j < special.length())
            {
                cout << "special : " << ch << endl;
            }
            else if (ch == operators[j] && j < operators.length())
            {
                cout << "operators : " << ch << endl;
            }
            else if (ch == alphabet[j])
            {
                cout << "Identifier : " << ch << endl;
            }
        }
    }


    return 0;
}
