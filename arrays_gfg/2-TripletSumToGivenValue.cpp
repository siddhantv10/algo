//https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
#include<bits/stdc++.h>
using namespace std;

void twoPointerMethod(int *a, int n, int s){    //Requires Sorting

    sort(a, a+n);           //IMP for 2 pointer method

    int j,k;

    for(int i=0; i<n-2; i++){
        j=i+1;
        k=n-1;

        while(j<k){
            int found = a[i]+a[j]+a[k];
            if(found==s)
                cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<endl;
            
            if(found <s)
                j++;
            
            else 
                k--;
        }


    }

}



int main(){
    int a[50];
    int n,s;

    cin>>n>>s;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    twoPointerMethod(a,n,s);

    return 0;
}
