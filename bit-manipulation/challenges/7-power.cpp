#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    int ans = 1;

    while (n > 0)
    {

        if (n & 1)
        {
            ans *= x;
        }

        n = n >> 1;
        x = x * x;
    }

    cout << ans << endl;

    return 0;
}