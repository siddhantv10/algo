#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n; int r;

    cin>>n>>r;

    int nod = 0;
    int temp = n;

    while(temp){
        temp /= 10;
        nod++;
    }

    r = r%nod;
    while(r<0){
        r += nod;
    }

    int mul =1; int div = 1;

    for(int i=0; i<nod; i++){
        if(i<r){
            div *= 10;
        }
        else{
            mul *= 10;
        }
    }

    int q = n/div;
    int rem = n%div;
    int res = rem * mul + q;

    cout<<res<<endl;
    return 0;
}
   