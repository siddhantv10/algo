#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int f = 0;
    for(int i=0; i<s.length()/2; i++){
        if(s[i] != s[s.length() - i - 1]){
            f = 1;
            cout<<"false\n";
            break;
        }
    }

    if(f==0){
        cout<<"true\n";
    }
    return 0;
}