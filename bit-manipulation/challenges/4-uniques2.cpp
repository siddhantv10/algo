// Find the two non-repeating elements in an array of repeating elements/ Unique Numbers 2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];
    int exor = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        exor ^= a[i];
    }

    int rightmostSetBit = exor & ~(exor - 1);
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] & rightmostSetBit){
            x ^= a[i];
        }
    }

    y = exor ^ x;

    cout<<min(x,y)<<" "<<max(x,y)<<endl;
    return 0;
}
