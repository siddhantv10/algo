#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int st = 1;
    int sp = 2*n-3;

    int val;

    for(int i=1; i<=n; i++){
        val =1;

        for(int j=1; j<=st; j++){
            cout<<val<<"\t";
            val++;
        }

        for(int k=1; k<=sp; k++){
            cout<<"\t";
        }


        if(i==n){
            st--;
            val--;
        }
        for(int j=1; j<=st; j++){
            val--;                      //remember to decrement before printing it
            cout<<val<<"\t";
            
        }

        st++;
        sp-=2;
        cout<<endl;
    }

    return 0;


    return 0;
}