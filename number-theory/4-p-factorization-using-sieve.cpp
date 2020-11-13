#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000005
#define ll long long

vector<int> primeSieve(int *p, int N)
{

    p[0] = p[1] = 0;
    p[2] = 1;

    for (int i = 3; i <= N; i += 2)
    {
        p[i] = 1;
    }

    for (int i = 3; i <= N; i+=2)
    {
        if (p[i] == 1)
        {
            for (int j = i * i; j <= N; j += i)
            {
                p[j] = 0;
            }
        }
    }

    //return a vector of primes upto n
    vector<int> primes;
    primes.push_back(2);

    for(int i =3; i<=N; i+=2){
        if(p[i] = 1){
            primes.push_back(i);
        }
    }
    return primes;
}

vector<int> factorize(int n, vector<int> primes)
{
    vector<int> factors;
    int p = primes[0];

    for(int i=1; p*p <= n; i++)
    {
        if (n % p == 0)
        {
            factors.push_back(p);
            while (n % p == 0)
            {
                n = n / p;
            }
        }
        p = primes[i];
    }

    if (n != 1)
    {
        factors.push_back(n);
    }

    return factors;
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
        int no;
        cin >> no;

        vector<int> factors = factorize(no, primes);

        for (auto f : factors)
        {
            cout << f << " ";
        }
        cout << endl;
    }

    cout << "\n";
    return 0;
}