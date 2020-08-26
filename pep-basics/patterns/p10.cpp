#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;


    int os = n/2;
    int is = -1;

    for(int i=0; i<n; i++){

        for(int j=0; j<os; j++){
            cout<<"\t";
        }
        cout<<"*\t";

        for(int k=0; k<is; k++){
            cout<<"\t";
        }

        if(is!=-1){
            cout<<"*\t";
        }

        if(i<n/2){
            os--;
            is+=2;
        }
        else
        {
            os++;
            is-=2;
        }
        cout<<endl;
        
    }

    return 0;
}