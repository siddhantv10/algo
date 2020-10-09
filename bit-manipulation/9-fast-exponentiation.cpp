#include<bits/stdc++.h>
using namespace std;

int power_opt(int a, int n){    //computes a^n in logN time
    int ans = 1;

    while(n>0){
        int last_bit = n&1;

        if(last_bit){
            ans *= a;
        }

        a = a*a;
        n = n>>1;
    }

    return ans;
}

int main(){
    int a,n;
    cin>>a>>n;

    cout<<power_opt(a,n)<<"\n";

    return 0;
}