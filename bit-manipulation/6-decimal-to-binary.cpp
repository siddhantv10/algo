#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int p = 1;

    while(n>0){
        int d = (n&1);
        ans = ans + p*d;

        p *= 10;
        n = n>>1;
    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<decimalToBinary(n)<<endl;

    return 0;
}