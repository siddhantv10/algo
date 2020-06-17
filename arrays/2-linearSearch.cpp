#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"enter the size of array: ";
    cin>>n;

    int a[n];

    cout<<"enter values in the array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int key;
    cout<<"enter the value to search for: ";
    cin>>key;


    for(int i=0; i<n; i++){
        if(key == a[i]){
            cout<<"found at index "<<i+1<<endl;
            break;
        }
        
        if(i==n-1){
            cout<<"not found"<<endl;
        }
    }

    return 0;
}