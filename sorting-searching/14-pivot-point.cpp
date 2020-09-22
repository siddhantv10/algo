#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int s = 0;
    int e = n-1;

    int ans  = -1;


    if(a[s]<a[e]){
        cout<<"-1\n";
        return 0;
    }

    while(s<=e){
        int mid = (s+e)/2;

        if(mid < e and a[mid] > a[mid+1]){
            cout<<mid<<endl;
            return 0;
        }
        else if(mid > s and a[mid] < a[mid-1]){
            cout<<mid-1<<endl;
            return 0;
        }

        else if(a[s] >= a[mid]){
            e = mid - 1;
        }
        else if(a[e] <= a[mid]){
            s = mid + 1;
        }
    }

    return 0;
}