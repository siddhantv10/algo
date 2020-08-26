#include<bits/stdc++.h>
using namespace std;

int anybase2d(long long int n, int b){
    int res=0;

    int p=0;
    while(n>0){
        int mul = pow(b,p++);
        int d = n%10;
        res += d*mul;

        n/=10;        
    }

    return res;
}

int main(){
    long long int n;
    cin>>n;

    int b;
    cin>>b;


    cout<<anybase2d(n,b)<<endl;
    return 0;
}