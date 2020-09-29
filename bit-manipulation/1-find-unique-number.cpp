#include<bits/stdc++.h>
using namespace std;

//given a list of numbers where every number occurs twice except one, find the unique number

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int x = 0;
    for(int i=0; i<n; i++){
        x = x ^ a[i];
    }

    cout<<x<<endl;

    return 0;
}