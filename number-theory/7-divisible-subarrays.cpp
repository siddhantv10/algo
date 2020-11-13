#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000005
#define ll long long

ll a[MAX], pre[MAX];    // a stores elements and pre stores the frequency of cumulative_sum%n

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        memset(pre, 0, sizeof(pre));
        pre[0] = 1;

        //input
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            sum = sum % n;
            sum = (sum + n) % n; //imp incase sum becomes negative
            pre[sum]++;
        }

        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll m = pre[i];
            ans += m * (m - 1) / 2;
        }

        cout << ans << endl;
    }

    cout << "\n";
    return 0;
}