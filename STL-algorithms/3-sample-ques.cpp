//stl approach of floor ceil ques
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int k;
    cin>>k;


    auto lb = lower_bound(a,a+n, k);

    cout<<"floor: "<<a[(lb-a-1)]<<endl;
    cout<<"ceil: "<<a[(lb-a)]<<endl;

    return 0; 
}