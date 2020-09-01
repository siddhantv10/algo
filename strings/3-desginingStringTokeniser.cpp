#include <bits/stdc++.h>
using namespace std;

char *mystrtok(char *s, char delim)
{
    static char *input = NULL;

    if (s != NULL) //for the first call
    {
        input = s;
    }

    if (input == NULL) //To terminate the function when string is complete
    {
        return NULL;
    }

    char *output = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {

        if (input[i] != delim) //copy till deliminator
        {
            output[i] = input[i];
        }
        else
        { //put a NULL character in the end and place the input for the
            //next token
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }

    //for the last token if string ends before deliminator comes
    output[i] = '\0';
    input = NULL;
    return output;
}

int main()
{
    char s[100] = "today is a rainy day";

    char *ptr = mystrtok(s, ' ');

    while (ptr != NULL)
    {
        cout << ptr << endl;

        ptr = mystrtok(NULL, ' ');
    }

    return 0;
}