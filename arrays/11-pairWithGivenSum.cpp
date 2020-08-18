#include<bits/stdc++.h>
using namespace std;

void pairSum(size_t n, int*a, int s){

    
    int j = n-1;
    int i=0; 
    sort(a, a+n);
    int cs;
    // cout<<n<<endl;
    while(i<j){             //2 pointer method only works on a sorted array
        cs = a[i]+a[j];
        
        if(cs<s){
            i++;}
        
        else if (cs > s){
            j--;}

        else if(cs == s){
            cout<<a[i]<<","<<a[j]<<endl;
            i++;
            j--;
        }
    }   
    // cout<<"done";
}

int main(){
    int a[50];
    int n;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s;
    cin>>s;

    pairSum(sizeof(a)/sizeof(*a),a,s);

    return 0;
}