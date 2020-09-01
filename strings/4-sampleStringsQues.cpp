#include <bits/stdc++.h>
using namespace std;

string extractStringAtKey(string str, int key)
{
    char *s = strtok((char *)str.c_str(), " "); //string to char* conversion

    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }

    return (string)s; //typecast char* to string
}

int convertToInt(string s)      //converting string to int
{
    int res = 0;
    int mul = 1;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        res += (s[i] - '0') * mul;
        mul *= 10;
    }
    return res;
}

bool numericCompare(pair<string, string> s1, pair<string, string> s2)
{
    string k1 = s1.second;
    string k2 = s2.second;

    return convertToInt(k1) < convertToInt(k2);
}

bool lexicoCompare(pair<string, string> s1, pair<string, string> s2)
{
    string k1 = s1.second;
    string k2 = s2.second;

    return k1 < k2;
}

int main()
{

    int n;
    cin >> n;
    cin.get();

    string s[100];
    for(int i=0; i<n; i++){
        getline(cin,s[i]);
    }

    int key;
    string rev, order;
    cin >> key >> rev >> order;

    pair<string, string> strPair[100];
    for (int i = 0; i < n; i++)
    {
        strPair[i].first = s[i];
        strPair[i].second = extractStringAtKey(s[i], key);
    }

    if (order == "numeric")
    {
        sort(strPair, strPair + n, numericCompare);
    }
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