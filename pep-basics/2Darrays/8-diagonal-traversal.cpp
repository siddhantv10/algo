#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int d = 0;
    while (d < n)
    {
        for (int i = 0, j = d; j < n; i++, j++)
        {
            cout << a[i][j] << " ";
        }
        d++;
    }

    return 0;
}