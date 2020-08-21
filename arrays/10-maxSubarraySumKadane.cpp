#include<bits/stdc++.h>
using namespace std;

void kadane(int*a , int n){
    int localSum =a[0];
    int globalSum = a[0];

    for(int i=1; i<n; i++){
        localSum = max(a[i], a[i]+localSum);
        globalSum = max(localSum, globalSum);
    }

    cout<<globalSum<<endl;
}

int main(){
    int a[50];
    int n;


    cin>>n;


    for(int i=0; i<n; i++)
        cin>>a[i];

    kadane(a,n);

    return 0;
}