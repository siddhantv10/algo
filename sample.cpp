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
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
 
 
int main() 
{
ios::sync_with_stdio(0);
cin.tie(0);
 
 vi V;
int x,n;

sd(n);
 for(int i =0; i<n; i++){
     sd(x);
     V.PB(x);
 }
 for(int i=0; i<V.size(); i++){
     cout<<V[i]<<" ";
 }
 
 
return 0;
   
}