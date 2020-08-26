#include<bits/stdc++.h>
using namespace std;

int freq(long long int x, int d){
    int f = 0;

    while(x>0){
        int k = x%10;
        if(k==d)
            f++;
        
        x/=10;
    }

    return f;
}

int main(){
    long long int n;
    cin>>n;

    int d;
    cin>>d;


    cout<<freq(n,d)<<endl;
    return 0;
}