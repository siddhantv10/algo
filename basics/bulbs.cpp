#include<bits/stdc++.h>
using namespace std;

int numberOfFactors(int n){
    int c=0;

    for(int i=2; i*i<=n; i++){
        if(n%i==0)
            c++;
    }

    return c;
}

int main(){
    int n;
    cin>>n;

    cout<<"1\n";

    for(int i=2; i<n; i++){
        int k = numberOfFactors(i);

        if(k%2)
            cout<<i<<endl;
    }

    return 0;
}