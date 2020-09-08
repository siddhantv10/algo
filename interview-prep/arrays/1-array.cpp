#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int> a){
    // int sum=0; int mn = 0;
    // int ans = INT_MIN;
    // for(int i=0; i<a.size(); i++){
    //     sum+=a[i];
    //     ans = max(ans, sum-mn);
    //     mn = min(mn, sum);
    // }
    // return ans;

    int gs = INT_MIN; int ls = 0;
    for(int i=0; i<a.size(); i++){
        ls = max(a[i],a[i]+ls);
        gs = max(ls, gs);
    }
    return gs;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;

        vector <int> a;
        for(int i=0; i<n; i++){
            int inpt;
            cin>>inpt;
            a.push_back(inpt);
        }

        if(k==1){
            cout<<maxSum(a)<<endl;
        }
        else{
            int sumOfArray = accumulate(begin(a), end(a), 0);
            for(int i=0; i<n; i++){
                a.push_back(a[i]);
            }
            int ans = maxSum(a);
            if(sumOfArray>0){
                ans += sumOfArray*(k-2);
            }
            cout<<ans<<endl;
        }
        
    }
    return 0;
}