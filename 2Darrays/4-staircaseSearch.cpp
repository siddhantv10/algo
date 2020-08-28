#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int val = 1;
    int a[50][50];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = val++;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cin >> key;
    int i = 0;
    int j = m - 1;
    int f = 0;
    while (i < n or j >= 0)
    {
        if (a[i][j] == key)
        {
            cout << "found at " << i << " " << j << endl;
            f = 1;
            break;
        }
        else if (a[i][j] < key)
            i++;

        else
            j--;
    }

    if (f == 0)
    {
        cout << "not found\n";
    }

    return 0;
}