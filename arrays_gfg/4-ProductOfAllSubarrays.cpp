//https://www.geeksforgeeks.org/product-of-all-subarrays-of-an-array-set-2/?ref=rp

//catch: counting all subarrays,
//total number of times each element occurs = (n-i)*(i+1)

#include<bits/stdc++.h>
using namespace std;

long int subarrayProduct(int *a, int n){
    
    long int result =1;

    for(int i=0; i<n; i++){
        result *= pow(a[i], (n-i)*(i+1));
    }

    return result;
}

int main(){
    int n;

    cin>>n;

    int a[50];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<subarrayProduct(a,n)<<endl;


    return 0;
}