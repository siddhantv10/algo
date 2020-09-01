#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int d;
    cin>>d;


    sort(a,a+n);

    int i=0, j=n-1, m;

    int f,c;

    while(i<=j){
        m = (i+j)/2;

        if(a[m]==d){
            f = c = a[m];
            break;
        }


        else if(a[m]>d){
            c = a[m];
            j=m-1;
        }

        else{
            f = a[m];
            i=m+1;
        }

    }

    cout<<c<<endl<<f<<endl;
    return 0;
}