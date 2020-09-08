#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5};  //works on vector as well

    int n = sizeof(a)/sizeof(a[0]);

    rotate(a,a+2,a+n);          //rotate left

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    //rotate right
    reverse(a,a+3);
    reverse(a+3, a+n);
    reverse(a,a+n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }


    cout<<endl;
    return 0;
}