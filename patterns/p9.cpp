#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j or i+j == n-1){
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
            
        }
        cout<<endl;
    }

    return 0;


}