#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000005
#define ll long long

vector<int> primeSieve(int *p, int n)
{
    p[0] = p[1] = 0;
    p[2] = 1;

    for (int i = 3; i <= n; i += 2)
    {
        p[i] = 1;
    }

    for (int i = 3; i <= n; i += 2)
    {
        if (p[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                p[j] = 0;
            }
        }
    }

    //return vector of primes upto N
    vector<int> primes;
    primes.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        if (p[i] == 1)
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int count_divisors(int n, vector<int> primes)
{
    int ans = 1;

    int p = primes[0];
    for (int i = 1; p * p <= n; i++)
    {
        if (n % p == 0)
        {
            int count = 0;
            while (n % p == 0)
            {
                n = n / p;
                count++;
            }
            ans = ans * (count + 1); //pnc formula
        }
        p = primes[i];
    }

    if(n != 1){
        ans = ans * 2;
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int p[MAX] = {0};
    vector<int> primes = primeSieve(p, 1000);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int count = count_divisors(n, primes);
        cout<< count<<endl;
    }

    cout << "\n";
    return 0;
}