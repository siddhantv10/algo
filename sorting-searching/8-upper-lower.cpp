#include<bits/stdc++.h>
using namespace std;

int lb(int a[], int n, int x){
    int s=0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid  = (s+e)/2;

        if(a[mid] == x){
            ans = mid;
            e = mid - 1;
        }
        else if(a[mid] < x){
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
    }

    return ans;
}

int ub(int a[], int n, int x){
    int s=0;
    int e = n-1;
    int ans= -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(a[mid] == x){
            ans = mid;
            s = mid+1;
        }
        else if(a[mid] > x){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        cout<<lb(a,n,x)<<" "<<ub(a,n,x)<<endl;
    }

    return 0;
}