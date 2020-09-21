#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main(){
    ll int n;
    cin>>n;

    ll int a[n];

    for(ll int i=0; i<n; i++){
        cin>>a[i];
    }

    for(ll int i=0; i<n; i++){
        for(ll int j=0; j<n-1; j++){
            if(a[j] >a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }

    for(ll int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}