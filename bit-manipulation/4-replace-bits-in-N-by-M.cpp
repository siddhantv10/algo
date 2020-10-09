#include<bits/stdc++.h>
using namespace std;

void clearRangeOfBits(int &n, int i, int j){
    int a = -1<<(j+1);
    int b = (1<<i) - 1;

    int mask = a|b;

    n = n&mask;
}

int solve(int n, int m, int i, int j){
    clearRangeOfBits(n,i,j);

    int mask = m<<i;
    return n|mask;
}

int main(){
    int n,m,i,j;
    
    cin>>n;
    cin>>m>>i>>j;

    cout<<solve(n,m,i,j);

    cout<<"\n";
    return 0;

}