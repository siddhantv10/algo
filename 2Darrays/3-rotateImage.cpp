#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    cin >> n >> m;

    int a[50][50];
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

    cout << endl;

    for (int i = 0; i < n; i++)
    { //Reverse by rows
        int sc = 0;
        int ec = m - 1;

        while (sc < ec)
        {
            swap(a[i][sc], a[i][ec]);
            sc++;
            ec--;
        }
    }

    for (int i = 0; i < n; i++)
    { //Transpose
        for (int j = 0; j < m; j++)
        {
            if (i < j)
            {
                swap(a[i][j], a[j][i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
}