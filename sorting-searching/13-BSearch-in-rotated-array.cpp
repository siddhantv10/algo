#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int k;
    cin>>k;

    int s = 0;
    int e = n-1;

    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(a[mid] == k){
            cout<<mid<<endl;
            return 0;
        }

        else if(a[mid] >= a[s]){
            
            if(k>=a[s] and k<=a[mid]){
                e = mid;
            }
            else{
                s = mid + 1;
            }
        }
        else if(a[mid] <= a[e]){

            if(k>=a[mid] and k<= a[e]){
                s = mid;
            }
            else{
                e = mid - 1;
            }
        }
    }

    cout<<"-1"<<endl;
    return 0;
}