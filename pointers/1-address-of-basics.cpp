#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    cout << &x << endl;


    char c = 'A';
    cout<< (void *)&c <<endl;           //exception for characters because of character overloading
                                        //hence use explicit typecasting from char* to void*
    string s = "whatever";
    cout<< &s <<endl;
    cout<< sizeof(&s)<<endl;
    
    return 0;
}