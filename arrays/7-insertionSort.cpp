//copy the current element in a bucket
//shift the pervious elements till the correct place for the bucket is empty
//put the bucket back

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int* a, int n){

    for(int i=1; i<n; i++){
        int e = a[i];

        int j = i-1;

        while (j>=0 and a[j] > e )
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = e;
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

            
}

int main(){
    int a[50];
    int n;

    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    insertionSort(a,n);

    return 0;
}