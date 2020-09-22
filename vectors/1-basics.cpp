#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;

    a.reserve(100); //use this function to avoid doubling

    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp); //O(1) appends to the end
    }

    a.pop_back(); //O(1) Removes the last element

    a.insert(a.begin() + 3, 3, 77); //O(N) Inserts 4 elements at the 3rd index with value 77

    //1 2 3 77 77 77 77 4 5

    a.erase(a.begin() + 2, a.begin() + 4); //erases the range of elements given

    if (a.empty())
    {
        cout << "it is empty\n";
    }

    cout << a.front() << " " << a.back() << endl; //first and last element of the vector

    vector<int> b(a.begin(), a.end());

    cout << a.capacity() << endl;
    cout << b.capacity() << endl;

    vector<int> c(3, 8);
    for (auto x : a)
    {
        cout << x << " ";
    }
    return 0;
}