#include<bits/stdc++.h>
using namespace std;


// Keep three indices low = 1, mid = 1 and high = N and there are four ranges, 1 to low (the range containing 0), 
// low to mid (the range containing 1), mid to high (the range containing unknown elements) and high to N 
// (the range containing 2).

//append tbhe respective group arrays by swapping the values

int main(){
    int n;
    cin>>n;

    int a[n];


    int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        
        if(a[mid]==0){
            swap(a[low++],a[mid++]);
        }

        else if(a[mid] == 1){
            mid++;
        }
        else{
            swap(a[mid], a[high--]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}