#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=2;
    while(n>0 and i*i<n){

        if(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }

        else{
            i++;
        }
    }
    if(n>2)
        cout<<n<<" "<<endl;
        
    return 0;
}