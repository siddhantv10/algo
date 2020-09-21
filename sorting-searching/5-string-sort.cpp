#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b)
{

    if ( (a.substr(0, b.length()) == b) or (b.substr(0, a.length()) == a) )
    {
        return a.length() > b.length();
    }
    else
    {
        return a < b;
    }
}

int main()
{
    int n;
    cin >> n;

    cin.get();
    string s[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    sort(s, s + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}