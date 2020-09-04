#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int a[n][m];
    int val = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = val++;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int sr = 0, sc = 0, er = n - 1, ec = m - 1;
    int count = 0;
    int total = n * m;

    while (count < total)
    {

        for (int i = sr, j = sc; i <= er and count < total; i++)
        {
            cout << a[i][j] << " ";
            count++;
        }
        sc++;

        for (int i = er, j = sc; j <= ec and count < total; j++)
        {
            cout << a[i][j] << " ";
            count++;
        }
        er--;

        for (int i = er, j = ec; i >= sr and count < total; i--)
        {
            cout << a[i][j] << " ";
            count++;
        }
        ec--;

        for (int i = sr, j = ec; j >= sc and count < total; j--)
        {
            cout << a[i][j] << " ";
            count++;
        }
        sr++;
    }

    return 0;
}