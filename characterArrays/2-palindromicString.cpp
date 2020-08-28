#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    cin.getline(s, 1000);
    int f = 0;

    for (int i = 0; i < strlen(s) / 2; i++)
    {
        if (s[i] != s[strlen(s) - i - 1])
        {
            cout << "not a palindrome\n";
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        cout << "palindrome\n";
    }
    return 0;
}