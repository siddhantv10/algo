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
    long long int n;
    cin>>n;

    int b1, b2;
    cin>>b1>>b2;

    int x = anybase2d(n,b1);
    long long int y = d2anybase(x,b2);

    cout<<y<<endl;
    return 0;
}

