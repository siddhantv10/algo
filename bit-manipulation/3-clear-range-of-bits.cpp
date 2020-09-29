#include<bits/stdc++.h>
using namespace std;

//clear last i bits
int clearLastIBits(int n, int i){
    int mask = -1<<i;

    return n&mask;
}

//clear a range of bits from i to j
int clearRangeItoJ(int n, int i,  int j){
    int ones = -1;
    int a = ones<<(j+1);
    int b = (1<<i) - 1;

    int mask = a | b;
    int ans = n & mask;

    return ans;
}
int main(){
    // int n,i;
    // cin>>n>>i;

    cout<<clearRangeItoJ(31,1,3);
    return 0;
}