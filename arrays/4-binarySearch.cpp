#include<bits/stdc++.h>
using namespace std;

int bsearch(int a[], int n, int k){
    int s=0; int e=n-1; int m; 

    while(s<e){
        m = (s+e)/2;

        if(a[m] == k)
            return m;
        
        else if(a[m]<k)
            s = m+1;
        
        else 
            e = m-1; 
    }

    return -1;
}

int main(){

    int a[50];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    cout<<"enter the array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<"enter the key: ";
    int k;
    cin>>k;

    cout<<"element preset at index: "<<bsearch(a,n,k)<<endl;

    return 0;
    
}