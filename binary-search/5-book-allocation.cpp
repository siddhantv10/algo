#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[], int n, int m, int curr_min){

    int students_count = 1;
    int pages_reading = 0;

    for(int i=0; i<n; i++){

        if(pages_reading + a[i] > curr_min){    //maximize pages
            students_count++;
            pages_reading = a[i];

            if(students_count > m){
                return false;
            }
        }
        else{
            pages_reading += a[i];
        }
    }
    return true;
}

int findPages(int a[], int n, int m){
    

    if(n < m){
        return -1;
    }

    int s = a[n-1];
    int e = accumulate(a, a+n,0);
    int ans = INT_MAX;

    while(s<=e){
        int mid  = (s+e)/2;

        if(isPossible(a,n,m,mid)){
            ans = min(ans, mid);
            e = mid - 1;        //minimize
        }
        else{
            s = mid + 1;        //minimize
        }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];


        cout<<findPages(a,n,m)<<endl;
    }
    return 0;
}