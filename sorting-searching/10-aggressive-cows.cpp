#include<bits/stdc++.h>
using namespace std;

bool possible(int a[], int n, int c, int mid){
    int count = 1;
    int lastPlaced = a[0];

    for(int i=0; i<n; i++){

        if(a[i]- lastPlaced >= mid){
            count++;
            lastPlaced = a[i];

            if(count>= c){
                return true;
            }
        }
    }
    return false;
}

int solve(int a[], int n, int c){
    int s = 0;
    int e = a[n-1] - a[0];

    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(possible(a,n,c,mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return ans;

}

int main(){
    int n,c;

    cin>>n>>c;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a,a+n);

    cout<<solve(a,n,c);

    return 0;
}