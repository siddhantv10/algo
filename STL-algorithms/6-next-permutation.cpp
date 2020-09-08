#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={3,2,1};        //works on a vector as well
    int n = sizeof(a)/sizeof(a[0]);

    next_permutation(a,a+n);


    for(int i:a){
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}