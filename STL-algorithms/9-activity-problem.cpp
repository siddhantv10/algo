#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int>p2){
    return p1.second < p2.second;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n;

        pair<int, int> p[n];

        for(int i=0; i<n; i++){
            cin>>a>>b;
            p[i] = make_pair(a,b);
        }

        sort(p,p+n, comp);
        
        int ans =1, chosen = 0;


        for(int i=1; i<n; i++){
            if(p[i].first >= p[chosen].second){
                ans++;
                chosen = i;     //to continue the count from the task that was actually done before incase we skipped any in between
            }
        }
        cout<<ans<<endl;

    }   
    return 0;
}