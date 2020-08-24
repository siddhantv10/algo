#include<bits/stdc++.h>
using namespace std;


int main(){

    int a,b,c;
    cin>>a>>b>>c;

    a = pow(a,2);
    b = pow(b,2);
    c = pow(c,2);

    if(a+b == c or a+c == b or c+b == a)
        cout<<"true\n";
    
    else
    {
            cout<<"false\n";
    }
    
    return 0;
}