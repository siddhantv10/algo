#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;


    while(t--){
        int n;
        cin>>n;

        int p =1;
        for(int i=2; i*i<=n; i++){

            if(n%i==0){
                p=0;
                // cout<<"not prime\n";
                break;
            }
        }

        if(p==1)
            cout<<"prime\n";
        else
        {
            cout<<"not prime\n";
        }
        
        
    }

    return 0;
}