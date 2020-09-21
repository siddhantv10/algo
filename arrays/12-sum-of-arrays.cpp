#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cin>>m;
    int b[m];

    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int i=n-1, j = m-1;

    int sum[n>m ? n+1 : m+1] = {0};
    int k = sizeof(sum)/sizeof(sum[0]) - 1;
    int l = k;
    int c = 0;

    while(k>=0){
        
        int d = c;

        if(i>=0){
            d+=a[i];
        }

        if(j>=0){
            d+=b[j];
        }

        sum[k] = d%10;
        c = d/10;

        i--;
        j--;
        k--;
    }

    if(sum[0]==0){
        i = 1;
    }
    else{
        i=0;
    }
    
    for(; i<=l; i++){
        cout<<sum[i]<<", ";
    }
    cout<<"END\n";

    return 0;
}