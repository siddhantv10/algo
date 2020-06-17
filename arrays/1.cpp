#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10] = {1,2,3};    //Declaring an array. If not added values, they would be 0

    //to see size 
    cout<<sizeof(a) / sizeof (a[0])<<endl;

    //Input from user
    for(int i=0; i<10; i++){
        cin>>a[i];
    }


    //printinig the array
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}