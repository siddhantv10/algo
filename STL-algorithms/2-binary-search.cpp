#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {10, 20, 30, 40, 50, 50, 60, 50};
    int n = sizeof(a) / sizeof(a[0]);

    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int key;
    cin >> key;

    bool present = binary_search(a, a + n, key);
    if (present)
    {
        cout << "present\n";
    }
    else
    {
        cout << "not found\n";
    }

    //lower bound returns the address of the first element that is >= key
    auto lb = lower_bound(a, a + n, key);
    cout << "lower bound: " << (lb - a) << endl;

    //Upper bound returns the address of the first element that is > key

    auto ub = upper_bound(a, a + n, key);
    cout << "upper bound: " << (ub - a) << endl;

    //to find the frequency of occurence of an element in a array
    //ub - lb
    cout << "frequency of " << key << ": " << (ub - lb) << endl;

    return 0;
}