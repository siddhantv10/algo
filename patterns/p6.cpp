#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int st = (n/2)+1;
    int sp = 0;

    for(int i=1; i<=n/2; i++){
        
        for(int j=1; j<=st; j++){
            cout<<"*\t";
        }

        for(int k=1; k<=sp; k++){
            cout<<"\t";
        }

        for(int j=1; j<=st; j++){
            cout<<"\t*";
        }
        cout<<endl;
        st--;
        sp+=2;

    }

    for(int i=(n/2)+1; i<=n; i++){
        
        for(int j=1; j<=st; j++){
            cout<<"*\t";
        }

        for(int k=1; k<=sp; k++){
            cout<<"\t";
        }

        for(int j=1; j<=st; j++){
            cout<<"\t*";
        }

        st++;
        sp-=2;
        cout<<endl;
    }

    return 0;

}