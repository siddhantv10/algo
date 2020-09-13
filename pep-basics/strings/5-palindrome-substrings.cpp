#include<bits/stdc++.h>
using namespace std;

bool palidrome(string s){
    for(int i=0; i<=s.length()/2; i++){
        if(s[i] != s[s.length() - i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    getline(cin,s);

    for(int i=0; i<s.length(); i++){
        for(int j=0; j<=s.length()-i; j++){
            string str = s.substr(i,j);
            bool pd = palidrome(str);
            if(pd){
                cout<<str<<"\n";
            }
        }
    }
    return 0;
}