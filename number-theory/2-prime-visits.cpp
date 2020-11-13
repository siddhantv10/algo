#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 1000000
#define ll long long

void primeSieve(int *arr)
{
    

    for (ll i = 3; i < MAX; i += 2)
    {
        arr[i] = 1;
    }

    for (ll i = 3; i < MAX; i += 2)
    {
        if (arr[i] == 1)
        {

            for (ll j = i * i; j < MAX; j += i)
            {
                arr[j] = 0;
            }
        }
    }

    arr[0] = arr[1] = 0;
    arr[2] = 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[MAX] = {0};

    primeSieve(arr);    //usual prime sieve

    int csum[MAX] = {0};    //make a cumulative sum array

    for(int i=1; i<MAX; i++){
        csum[i] = csum[i-1] + arr[i];   //store number of primes cumulatively
    }

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        int count = 0;

        count = csum[b] - csum[a-1];

        cout << count << endl;
    }

    cout << "\n";
    return 0;
}