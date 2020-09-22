#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool possible(ll a[], ll n, ll k, ll t, ll mid){
    ll count =1;
    ll unitsPainted = 0;

    for(ll i=0; i<n; i++){
        unitsPainted += a[i];

        if(unitsPainted > mid){
            unitsPainted = a[i];
            count++;

            if(count>k){
                return false;
            }
        }
    }

    return true;
}

ll solve(ll a[], ll n, ll k, ll t){
    ll s = *max_element(a,a+n);
    ll e = accumulate(a,a+n, 0);

    ll ans= -1;

    while(s<=e){
        ll mid = (s+e)/2;

        if(possible(a,n,k,t,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    return ans%10000003*t;
}

int main(){
    ll n,k,t;
    cin>>n>>k>>t;

    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<solve(a,n,k,t)%10000003;

    return 0;
}