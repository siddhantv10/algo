#include <bits/stdc++.h>
using namespace std;

string extractStringAtKey(string str, int key)
{
    char *s = strtok((char *)str.c_str(), " "); //string to char* conversion

    while (key>1)
    {
        s = strtok(NULL, " ");
        key--;
    }

    return (string)s; //typecast char* to string
}

int convertToInt(string s)
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

int main(){
    int k = 2;
    string s = "10 20 30 40 50";

    // cout<<extractStringAtKey(s,k
    // );

    int y = convertToInt("25");

    cout<<y+14;

    return 0;
}