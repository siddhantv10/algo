#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    int sp=0;

    for(int i=0; i<n; i++){

        for(int j=0; j<sp; j++){
            cout<<"\t";
        }

        cout<<"*\n";
        sp++;
    }

    return 0;
}