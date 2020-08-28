#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[1000], b[1000];
    int longestl = 0;

    cin.get();
    for (int i = 0; i < n; i++)
    {
        cin.getline(a, 1000);

        if (strlen(a) > longestl)
        {
            strcpy(b, a);
            longestl = strlen(a);
        }
    }

    cout << b << " : " << longestl;

    return 0;
}