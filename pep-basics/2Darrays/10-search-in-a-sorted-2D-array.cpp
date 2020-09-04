#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }

    int x;
    cin>>x;

    int i=0;
    int j = n-1;

    while(i<n and j>=0){
        if(a[i][j] == x){
            cout<<i<<endl<<j<<endl;
            return 0;
        }

        else if(a[i][j] < x){
            i++;
        }

        else{
            j--;
        }
    }

    cout<<"Not Found"<<endl;
    return 0;
}