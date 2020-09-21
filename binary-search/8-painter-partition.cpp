#include <bits/stdc++.h>
using namespace std;

int numberOfPainters(int a[], int n, int mid){
    int total = 0;
    int numPainters = 1;

    for(int i=0; i<n; i++){
        total += a[i];

        if(total > mid){
            total = a[i];
            numPainters++;
        }

    }

    return numPainters;
}

int main()
{

    int k, n;
    cin >> k >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s = *max_element(a,a+n);
    int e = accumulate(a, a + n, 0);
    int ans = -1;

    while (s < e)
    {
        int mid = (s + e)/2;

        int requiredPainters = numberOfPainters(a, n, mid);

        if(requiredPainters<=k){
            ans = mid;
            e = mid;
        }
        else{
            s = mid + 1;
        }

    }

    cout << ans << endl;

    return 0;
}