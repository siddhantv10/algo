#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sp = n/2;
    int st = 1;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=sp; j++){
            cout<<"\t";
        }    

        for(int k=1; k<=st; k++){
            cout<<"*\t";
        }

        if(i<=n/2){
        sp--;
        st+=2;
        }

        else{
            sp++;
            st-=2;
        }
        cout<<endl;
    }






    return 0;
    
}