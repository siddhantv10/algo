#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // cin >> n;
    string a;
    // getline(cin,s);
    // char a[50];
    // cin.getline(a, 50);
    // n = sizeof(a);
    getline(cin,a);
    n = a.length();

    sort(a.begin(), a.end());

    cout<<a<<endl;

    return 0;
}