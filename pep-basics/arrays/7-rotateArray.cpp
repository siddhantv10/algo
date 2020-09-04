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

        int r;
        cin >> r;

        // int i=0; int temp;

        r = r % n;

        reverse(a, a+n-r);
        reverse(a+n-r, a+n);
        reverse(a, a+n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        return 0;
    }