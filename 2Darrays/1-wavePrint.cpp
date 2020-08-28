#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;

    int a[50][50];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i][j] << " ";
            }
        }

        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
    }

    return 0;
}