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

    int exor = 0;
    for (int i = 0; i < n; i++)
    {
        exor = exor ^ a[i];
    }

    //now exor = a^b
    int temp = exor;
    int pos = 0;
    while ((temp & 1) > 0)
    {
        temp = temp >> 1;
        pos++;
    }

    int x = 0, y = 0;   //two numbers

    for (int i = 0; i < n; i++)
    {
        if (a[i] & (1 << pos) > 0)
        {
            x = x ^ a[i];
        }
    }
    y = exor ^ x;

    cout << min(x, y) << " " << max(x, y) << endl;
    return 0;
}