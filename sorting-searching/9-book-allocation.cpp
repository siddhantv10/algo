#include<bits/stdc++.h>
using namespace std;

bool possible(int a[], int n, int m, int mid){
    int count = 1;
    int pagesRead = 0;

    for(int i=0; i<n; i++){
        pagesRead += a[i];

        if(pagesRead > mid){
            pagesRead = a[i];
            count++;

            if(count > m){
                return false;
            }
        }
    }
    return true;
}

int solve(int a[], int n, int m){

    int s= *max_element(a, a+n);
    int e= accumulate(a,a+n, 0);
    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(possible(a,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;

}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;

        cin>>n>>m;

        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        cout<<solve(a,n,m)<<endl;
    }
    return 0;
}