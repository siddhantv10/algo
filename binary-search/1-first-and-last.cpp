#include<bits/stdc++.h>
using namespace std;

int first_occ(int a[], int n, int k)
{
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(k == a[mid]){
            ans = mid;
            e = mid - 1;
        }

        else if(k > a[mid]){
            s = mid + 1;
        }

        else{
            e = mid-1;
        }
    }
    return ans;
}

int last_occ(int a[], int n, int k){
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(k == a[mid]){
            ans = mid;
            
            s = mid + 1;
        }

        else if(k > a[mid]){
            s = mid + 1;
        }

        else{
            e = mid-1;
        }
    }
    return ans;
}
int main(){
    int a[] = {1,2,5,8,8,8,8,10,12};        //sorted array
    int n = sizeof(a)/sizeof(a[0]);

    int key = 8;

    auto lb = first_occ(a, n, key);
    auto ub = last_occ(a, n, key);

    cout<<lb<<" "<<ub<<endl;
    return 0;

}