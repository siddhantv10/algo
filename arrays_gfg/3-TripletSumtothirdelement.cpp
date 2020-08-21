//https://www.geeksforgeeks.org/find-triplet-sum-two-equals-third-element/

#include<bits/stdc++.h>
using namespace std;

void twoPointerMethod(int*a, int n){

    int j,k;
    sort(a, a+n);

    for(int i=n-1; i>=0; i--){
        j=0; k=i-1;

        while(j<k){
            int found = a[j]+a[k];
            if(found == a[i]){
                cout<<a[i]<<"="<<a[j]<<"+"<<a[k]<<endl;
            }

            if(found<a[i])
                j++;
            
            else 
                k--;
        }
    }
}

int main(){
    int n;

    cin>>n;

    int a[50];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    twoPointerMethod(a,n);

    return 0;
}