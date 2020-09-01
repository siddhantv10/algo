#include <bits/stdc++.h>
using namespace std;

string tokenise(string str, int k)
{

    char *s = strtok((char *)str.c_str(), " ");

    while (k > 1)
    {
        s = strtok(NULL, " ");
        k--;
    }

    return (string)s;
}


bool lexicoCompare(pair<string, string> p1, pair<string, string> p2)
{
    string k1 = p1.second;
    string k2 = p2.second;

    return k1 < k2;
}

bool numeroCompare(pair<string, string> p1, pair<string, string> p2)
{
    int k1 = stoi(p1.second);
    int k2 = stoi(p2.second);

    return k1 < k2;
}

int main()
{
    int n;
    cin >> n;
    cin.get();

    string s[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    int k;
    string rev, order;
    cin >> k >> rev >> order;

    pair<string, string> strPair[n];

    for (int i = 0; i < n; i++)
    {
        strPair[i].first = s[i];
        strPair[i].second = tokenise(s[i], k);
    }

    if (order == "numeric")
        sort(strPair, strPair + n, numeroCompare);

    else
    {
        sort(strPair, strPair + n, lexicoCompare);
    }

    if (rev == "true")
    {

        for (int i = 0; i < n / 2; i++)
        {
            swap(strPair[i], strPair[n - i - 1]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << strPair[i].first << endl;
    }

    return 0;
}