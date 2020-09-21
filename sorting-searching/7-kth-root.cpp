#include<bits/stdc++.h>
using namespace std;

long long int kroot(long long int n, int k){
    long long int s = 0;
    long long int e = n;
    long long int ans = -1;

    while(s<=e){
        long long int root = (s+e)/2;

        if(pow(root, k) == n){
            return root;
        }

        else if(pow(root, k) < n){
            ans = root;
            s = root + 1;
        }
        else{
            e = root - 1;
        }
    }

    return ans;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long int n;
        int k;

        cin>>n>>k;

        cout<<kroot(n,k)<<endl;
    }

    return 0;
}