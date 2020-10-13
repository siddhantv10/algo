#include <bits/stdc++.h>
using namespace std;

int maximumXorInRange(int l, int r)
{
    int lxr = l ^ r;

    int msbPos = 0;
    while (lxr > 0)
    {
        msbPos++;
        lxr >>= 1;
    }

    int maxXor = 0;
    int shifts = 1;
    while (msbPos--)
    {
        maxXor += shifts;
        shifts <<= 1;
    }

    return maxXor;
}

int main()
{
    int x, y;

    cin >> x >> y;

    cout << maximumXorInRange(x, y) << endl;

    return 0;
}