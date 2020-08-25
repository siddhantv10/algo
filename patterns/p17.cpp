#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int st = 1;

    for(int i=0; i<n; i++){

        for(int j=0; j<n/2; j++){
            if(i==n/2)
                cout<<"*\t";

            else
                cout<<"\t";
        }

        for(int k=0; k<st; k++){
            cout<<"*\t";
        }

        if(i<n/2)
            st++;
        
        else
        {
            st--;
        }
        cout<<endl;
        
    }

    return 0;
}