#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    for(int i=0; i<s.length(); i++){
        for(int j=0; j<=s.length()-i; j++){
            cout<<s.substr(i,j)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}