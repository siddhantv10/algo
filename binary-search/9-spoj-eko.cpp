#include<bits/stdc++.h>
using namespace std;

bool check(long long int a[], long long int n, long long int m, long long int mid){
    long long int sum = 0;

    for(int i=0; i<n; i++){

        if(a[i]-mid > 0)
            sum+=a[i] - mid; 
    }

    if(sum >= m){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    long long int n, m;

    cin>>n>>m;

    long long int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    // sort(a,a+n);

    long long int s = 0;
    long long int e = *max_element(a,a+n);

    long long int ans = -1;

    while(s<=e){
        long long int mid = (s+e)/2;

        if(check(a,n,m,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    cout<<ans<<endl;

    return 0;
}