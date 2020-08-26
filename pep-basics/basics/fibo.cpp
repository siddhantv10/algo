#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;


    int a=0; int b=1; int s;
    cout<<a<<"\n"<<b<<"\n";
    for(int i=0; i<n-2; i++){
        s = a+b;
        cout<<s<<"\n";
        a=b;
        b=s;

    }

    return 0;
}