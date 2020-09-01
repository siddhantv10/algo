#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    long int max = a[0];
    long int min = a[0];

    for(int i=0; i<n; i++){
        if(a[i]<min)
            min = a[i];

        if(a[i]>max)
            max = a[i];
    } 

    long int span = max-min;
    cout<<span<<endl;
    return 0;
}