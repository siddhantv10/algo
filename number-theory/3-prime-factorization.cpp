#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000005
#define ll long long

void primeFactors(int n)
{
    vector<pair<int, int>> factors;
    int cnt;

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n = n / i;
            }
            factors.push_back(make_pair(i, cnt));
        }
    }
    if (n != 1)
    { //means the remaining number is a prime number
        factors.push_back(make_pair(n, 1));
    }

    //print
    for (auto p : factors)
    {
        cout << p.first << "^" << p.second << endl;
    }

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    primeFactors(n);

    cout << "\n";
    return 0;
}