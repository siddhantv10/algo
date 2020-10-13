#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int count = 0;

    while (n > 0)
    {
        count++;
        n = n & (n - 1);
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        int s = 0;
        for (int i = a; i <= b; i++)
        {
            s += countSetBits(i);
        }

        cout << s << endl;
    }

    return 0;
}