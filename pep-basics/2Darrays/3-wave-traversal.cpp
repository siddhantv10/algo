#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int j=0;
    while(j<m){
        
        if(j%2==0){
            for(int i=0; i<n; i++){
                cout<<a[i][j]<<" ";       
            }
        }

        else{
            for(int i=n-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
        }
        j++;

    }

    return 0;
}