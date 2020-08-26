#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int st = (n/2)+1;
    int sp = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<st; j++){
            cout<<"*\t";
        }

        for(int k=0; k<sp; k++)
            cout<<"\t";

        for(int j=0; j<st; j++)
            cout<<"*\t";
        
        if(i<n/2){
            st--;
            sp+=2;
        }
        else
        {
            st++;
            sp-=2;
        }
        
        cout<<endl;
    }
    return 0;

}