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

    int i = 0, j = n - 1;

    int fi = -1, li = -1;

    while (i <= j)
    {
        int m = (i + j) / 2;

        if (d > a[m])
        {
            i = m + 1;
        }

        else if (d < a[m])
        {
            j = m - 1;
        }

        else
        {
            fi = m;
            j = m - 1;
        }
    }

    i = 0;
    j = n - 1;
    while (i <= j)
    {
        int m = (i + j) / 2;

        if (d > a[m])
        {
            i = m + 1;
        }

        else if (d < a[m])
        {
            j = m - 1;
        }

        else
        {
            li = m;
            i = m + 1;
        }
    }

    cout << fi << endl
         << li << endl;

    return 0;
}