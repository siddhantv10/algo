//Swapping 2 immediate numbers
//fixing them from the end
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int* a, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
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
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bubbleSort(a,n);

    return 0;
}