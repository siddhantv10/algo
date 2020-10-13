#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        int count = 0;
        while (x > 0)
        {
            count++;
            x = x & (x - 1);
        }

        cout << count << endl;
    }

    return 0;
}