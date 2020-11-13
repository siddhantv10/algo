#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int s = 0;
        while(n>0){
            n = n&(n-1);
            s++;
        }
        cout<<s<<endl;
    }

    return 0;
}