#include<bits/stdc++.h>
using namespace std;
 
#define MOD 1000000007
#define MAX 1000005
#define ll long long

int gcd(int a, int b){
    if(b==0)
        return a;
    
    else
        return gcd(b, a%b); //remember to switch places of a and b
    
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b);


    cout<<"\n";
    return 0;


}