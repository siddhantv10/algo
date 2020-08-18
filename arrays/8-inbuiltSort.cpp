//sort(a , a+n)
#include<bits/stdc++.h>
using namespace std;


bool dece(int a, int b){        //comparator function
                                //passing function as a parameter to convert into a decreasing sort
    return a > b;
}

int main(){ 
    int a[50];
    int n;

    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];
    
    sort(a, a+n, dece);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;


    return 0;
}