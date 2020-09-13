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



int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    sd(t);
    while(t--){
        int n;
        sd(n);

        int a[n];
        for(int i=0; i<n; i++)  sd(a[i]);

        sort(a,a+n);
        
        int p1 = a[n-1], p2 = a[n-1];
        for(int i=0; i<4; i++){
            p1 = p1*a[i];
            p2 = p2*a[n-i-2];
        }

        int p3 = a[0]*a[1];
        for(int i=0; i<3; i++){
            p3= p3*a[n-i-1];
        }
        cout<<max(max(p1,p2),p3)<<endl;
    }



    return 0;


}