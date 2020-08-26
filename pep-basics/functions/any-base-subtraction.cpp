#include<bits/stdc++.h>
using namespace std;

long int anyBaseSub(int n, long int a, long int b){
    int res = 0;

    int p = 1;
    int brw = 0;    
    while(b>0){
        int d1 = a%10;
        int d2 = b%10;
        int d;
        a /= 10;
        b /= 10;
        
        if(brw>0){
            d2--;
            brw=0;
        }

        if(d2>=d1){
            d = d2 - d1;
            brw = 0;
        }
        else{
            d = d2 + n - d1;
            brw = 1;
        }

        res += d*p;

        p*=10;

    }
    return res;
}

int main(){
    int n;
    cin>>n;

    long int a, b;
    cin>>a>>b;

    long int x = anyBaseSub(n,a,b);
    cout<<x<<endl;

    return 0;
}