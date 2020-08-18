#include<bits/stdc++.h>
using namespace std;

void kadane(int*a , int n){
    int cs =0;
    int ms = 0;

    for(int i=0; i<n; i++){
        cs += a[i];
        if(cs < 0){     //IMP if cs goes lower than 0, reset it
            cs =0;
        }
        ms = max(cs, ms);
    }

    cout<<ms<<endl;
}

int main(){
    int a[50];
    int n;


    cin>>n;


    for(int i=0; i<n; i++)
        cin>>a[i];

    kadane(a,n);

    return 0;
}