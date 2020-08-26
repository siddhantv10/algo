#include<bits/stdc++.h>
using namespace std;

long long int d2anybase(int n, int b){
    long long int res=0;

    int p=0;
    while(n>0){
        int k = n%b;
        res += k*pow(10,p++);
        n=n/b;
    }

    return res;
}

int main(){
    int n;
    cin>>n;

    int b;
    cin>>b;

    cout<<d2anybase(n,b)<<endl;
    return 0;
}