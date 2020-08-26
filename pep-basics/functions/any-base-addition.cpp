#include<bits/stdc++.h>
using namespace std;

long int anyBaseAddition(int n, long int a, long int b){

   long int res = 0;

    int c = 0;
    int p = 1;

    while(a>0 or b>0 or c>0){
        int d1 = a % 10;
        int d2 = b % 10;

        a /= 10;
        b /= 10;

        int d = d1 + d2 + c;
        c = d / n;
        d = d % n;

        res += d * p;
        p*= 10;
        
    }

   return res;
}

int main(){
    int n;
    cin>>n;

    long int a, b;
    cin>>a>>b;

    long int x = anyBaseAddition(n,a,b);
    cout<<x<<endl;

    return 0;
}