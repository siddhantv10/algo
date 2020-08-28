#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[50][50];

    cin.get(); //remove the \n from the stream otherwise it will be added in the char array
    for (int i = 0; i < n; i++)
    {
        cin.getline(a[i], 50); //how to take string input in a character array
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}