//How to break a char array with a delimiter
//strtok(string, delimiter)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100] = "today is a, rainy day";

    char *ptr = strtok(s, " ");

    while (ptr != NULL)
    {
        cout << ptr << endl;
        ptr = strtok(NULL, " ");
    }

    return 0;
}