#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a<b;
    }
    return a.length()<b.length();
}
int main()
{
    int n;

    cin >> n;

    string s[10];

    cin.get();
    for (int i = 0; i < n; i++)
    {
        // getline(cin,s[i]);
        getline(cin, s[i]);         //only way to take an input to a string
    }

    sort(s, s + n, compare);

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}