#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;

    cin>>n;

    for(int i=1; i<=n; i++){
        
        for(int k=1; k<i; k++){
            cout<<"\t";
        }

        for(int j=n-i+1; j>0; j--){
            cout<<"*\t";
        }

        

        cout<<endl;
    }

    return 0;
}