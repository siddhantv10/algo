#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,u;

    cin>>l>>u;

    for(int i=l; i<u; i++){

        int p=0;

        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                p=1;
                break;
            }
        }

        if(p==0)
            cout<<i<<endl;
    }
    return 0;
}