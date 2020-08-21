//https://www.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/
#include<bits/stdc++.h>
using namespace std;


void subarrayWithGivenSum(int *a, int n, int s){
    unordered_map<int, int> map;
    
    int cs=0;
    
    for(int i=0; i<n; i++){
        cs += a[i];
        
        if(cs == s){
            cout<<1<<" "<<i+1<<endl;
            return;
        }
        
        if(map.find(cs-s) != map.end()){            //IMP
            cout<<map[cs-s]+1<<" "<<i+1<<endl;
            return;
        }
        
        map[cs] = i;                                //IMP
    }
    
    cout<<"not found";
}


int main(){
    int t;
    
    cin>>t;
    
    while(t--){
        int n, s;
        cin>>n>>s;
        
        int a[50];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        subarrayWithGivenSum(a,n,s);
    }
    
    return 0;
}