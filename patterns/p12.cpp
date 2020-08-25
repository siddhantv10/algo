#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a=0; int b=1;

    int c;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){

            c = a+b;
            cout<<a<<"\t";
            a=b;
            b=c;
        }
        cout<<endl;
    }
    return 0;
}