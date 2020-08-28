#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;

    cin>>n>>m;

    int a[50][50]; int val =1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = val++;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int str = 0, stc=0, endr=n-1, endc=m-1;
    while(str<=endr and stc <= endc){
        for(int j=stc; j<=endc; j++){
            cout<<a[str][j]<<" ";
        }

        str++;

        for(int i=str; i<=endr; i++){
            cout<<a[i][endc]<<" ";
        }
        endc--;

        if(str < endr){
            for(int i=endc; i>=stc; i--){
                cout<<a[endr][i]<<" ";
            }
            endr--;
        }

        if(stc < endc){
            for(int i=endr; i>= str; i--){
                cout<<a[i][stc]<<" ";
            }
            stc++;
        }
    }

    return 0;
}
