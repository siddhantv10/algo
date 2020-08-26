#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    // int sp=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout<<"*\t";
                break;
            }

            else
            {
                cout<<"\t";
            }
            
            
            // cout<<endl;
        }
        cout<<endl;


    }

    return 0;
}