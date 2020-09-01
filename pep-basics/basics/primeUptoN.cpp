#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    int count = 0;
    for(int i=2; count <n; i++){

        int f= 0;

        for(int j=2; j*j<=i; j++){
            
            if(i%j==0){
                f = 1;
                break;
            }   
        }

        if(f==0){
            count++;
            cout<<i<<" ";
        }

    }

    return 0;
}