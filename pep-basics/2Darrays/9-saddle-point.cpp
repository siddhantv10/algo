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

    for(int i=0; i<n; i++){

        int svj=0;
        for(int j=1; j<n; j++){
            if(a[i][j] < a[i][svj]){
                svj = j;
            }
        }

        bool flag = true;
        for(int k=0; k<n; k++){
            if(a[k][svj] > a[i][svj]){
                flag = false;
                break;
            }
        }

        if(flag == true){
            cout<<a[i][svj]<<endl;
            return 0;
        }
    }

    cout<<"Invalid input"<<endl;

    
    return 0;
}