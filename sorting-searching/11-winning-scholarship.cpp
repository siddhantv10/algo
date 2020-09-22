#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;

    int s= 0;
    int e = n;

    int ans = -1;

    while(s<=e){

        int mid = (s+e)/2;

        if(mid*x <= m+(n-mid)*y){
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