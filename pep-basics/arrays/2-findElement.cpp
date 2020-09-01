#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int d;
    cin >> d;

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == d)
        {
            cout << i << endl;
            f = 1;
            break;
        }
    }
    if (f == 0)
        cout << "-1" << endl;

    return 0;
}