#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; 
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    
    for(int i=0; i<pow(2,n); i++){
        string set = "";
        int temp = i;

        for(int j= n-1; j>=0;  j--){
            int r = temp%2;
            temp = temp/2;

            if(r == 0){
                set.insert(0,"-\t");
            }
            else{
                set.insert(0,"\t");
                set.insert(0,to_string(a[j]));
            }
        }

        cout<<set<<endl;
        
    }

    return 0;
}