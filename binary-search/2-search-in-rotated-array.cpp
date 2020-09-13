#include <bits/stdc++.h>
using namespace std;

int pivot_search(int a[], int n, int k)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (k == a[mid])
        {
            return mid;
        }

        if (a[s] <= a[mid])
        {
            if (k <= a[mid] and k >= a[s])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }

        if (a[e] >= a[mid])
        {
            if (k <= a[e] and k >= a[mid])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    cout << pivot_search(a, n, k) << endl;

    return 0;
}