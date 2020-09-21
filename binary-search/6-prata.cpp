#include<bits/stdc++.h>
using namespace std;

bool target(int r[], int n, int p, int givenTime){
    int pc = 0;

    for(int i=0; i<n; i++){
        int k = givenTime;
        pc = pc + (-1 + sqrt(1+8*k/r[i]))/2;    //find n from sum of an AP formula with a = d
    }

    if(pc>=p){
        return true;
    }

    else{
        return false;
    }

}

int minTime(int r[], int n, int p){
    
    sort(r,r+n);
    int s = 0;
    int e = r[0]*p*(p+1)/2;

    int ans = -1;
    
    while(s<=e){
        int mid = (s+e)/2;

        if(target(r,n,p,mid)){
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
        int p,n;
        cin>>p>>n;

        int r[n];
        for(int i=0; i<n; i++){
            cin>>r[i];
        }

        cout<<endl<<minTime(r,n,p);
    }

    return 0;
}