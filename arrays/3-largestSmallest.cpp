#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    int a[n];

    cout<<"enter values in the array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0; i<n; i++){
        if(a[i]<min)
            min = a[i];
        if(a[i]>max)
            max = a[i];
    }

    cout<<"min "<<min<<endl<<"max "<<max<<endl;

    return 0;
}