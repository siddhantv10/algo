#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000005
#define ll long long

void prime_sieve(int *p)
{
    //mark all odd numbers as prime initially
    for (ll i = 3; i <= 1000000; i += 2)
    {
        p[i] = 1;
    }

    //sieve
    for (ll i = 3; i <= 1000000; i += 2)
    {
        //sieve further multiples of all marked odd numbers
        if (p[i] == 1)
        {
            for (ll j = i * i; j <= 1000000; j += i)
            {
                p[j] = 0;
            }
        }
    }

    p[2] = 1;
    p[0] = p[1] = 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int p[MAX] = {0};

    prime_sieve(p);

    for (int i = 0; i <= n; i++)
    {
        if (p[i] == 1)
        {
            cout << i << " ";
        }
    }

    cout<<endl;
    return 0;
}