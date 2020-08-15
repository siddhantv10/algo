#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[j]<a[i])
                swap(a[i],a[j]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int a[50];
    int n;
    cout<<"size:";
    cin>>n;

    cout<<"enter:";
    for(int i=0; i<n; i++){
        cin>>a[i];

    }

    insertionSort(a,n);

    return 0;

}