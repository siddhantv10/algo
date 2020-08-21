#include <bits/stdc++.h>
using namespace std;

void kadane(int *a, int n){
    
    int cs=0, ms=INT_MIN;
    
    for(int i=0; i<n; i++){
        cs += a[i];
        
        if(cs <0){
            cs =0;
        }
        ms = max(ms, cs); 
    }
    
    cout<<ms<<endl;
}

int main() {
	int t;
	
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[50];
	    
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    kadane(a,n);
	}
	return 0;
}