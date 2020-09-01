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

        while (r < 0)
        {
            r = r + n;
        }

        while (r--)
        {
            // int temp = a[n-1];

            for (int i = 1; i < n; i++)
            {
                swap(a[0], a[i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        return 0;
    }