#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if((i==0 and j<=n/2) or (i==n-1 and j>=n/2) or (j==n/2)){
                cout<<"*\t";
            }

            else if((j==0 and i>=n/2) or (j==n-1 and i<=n/2) or (i==n/2)){
                cout<<"*\t";
            }

            else
                cout<<"\t";
            
        }

        cout<<endl;
    }

    return 0;
}