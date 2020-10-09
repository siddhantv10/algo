#include<bits/stdc++.h>
using namespace std;

//method 1 - O(logN)
int countSetBits(int n){
    int count = 0;

    while(n>0){
        count += n&1;
        n = n>>1;
    }
    return count;
}

//method 2 faster - loop jumpts directly to the next set bit with complexity O(no of set bits)
int countSetBitsFast(int n){
    int count = 0;
    
    while(n>0){
        n = n&(n-1);
        count++;
    }

    return count;
}

//inbuilt

int main(){
    int n;
    cin>>n;

    cout<<countSetBitsFast(n)<<endl;
    cout<<__builtin_popcount(n)<<endl;

    // cout<<"\n";
    return 0;

}