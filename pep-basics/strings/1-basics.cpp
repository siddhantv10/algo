#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    s = "hello";

    //Operations on strings
    // getline(cin, s);
    // cout<<s<<endl;
    // cout<<s.length()<<endl;
    // s.push_back('s');
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;

    // s.resize(3);
    // cout<<s<<endl;

    string a = "bcdefa";
    sort(a.begin(), a.end());
    cout << a << endl;

    char ch[80];
    a.copy(ch, a.length(), 0);
    a.pop_back();
    a.pop_back();
    cout << a << endl;

    s.swap(a);
    cout << a << endl;

    a.insert(0, ch);
    cout << a << endl;

    a.replace(0, 5, "siddh");
    a.replace(1, 4, 3, 's'); //start from 1 for 4 characters
    cout << a << endl;

    int k = a.find('h');
    cout << k << endl;
    string p = a.substr(5, 2); //start from 5 for 2 characters
    cout << p << endl;

    return 0;
}