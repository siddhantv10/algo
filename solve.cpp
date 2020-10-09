#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define ll long long
#define MOD 1000000007

//isOdd
//getbit
//setbit
//clearbit
//updatebit

bool isOdd(int n){
    return n&1;
}

int getBit(int n, int i){
    int mask = 1<<i;

    int b = mask & n;

    return b>0;
}

int setBit(int n, int i){
    int mask = 1<<i;
    
    return n|mask;
}

int clearBit(int n, int i){
    int mask = 1<<i;
    mask = ~mask;

    return n&mask;
}

int updateBit(int n, int i, int v){
    int m = 1<<i;
    m = ~m;
    n = n&m;

    int mask = v<<i;
    n = n|mask;

    return n;
}

int clearLastIBits(int n, int i){
    int mask = -1<<i;

    return n&mask;
}

int clearRangeItoJ(int n, int i, int j){
    int a = -1<<(j+1);
    int b = (1<<i) - 1;

    int mask = a|b;

    return mask&n;
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // cout<<isOdd(5)<<endl;
    // cout<<getBit(5,2)<<endl;
    cout<<clearRangeItoJ(63, 1, 4)<<endl;
    // cout<<getBit(5,0)<<endl;


    return 0;


}