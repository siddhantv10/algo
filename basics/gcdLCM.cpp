#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a==0)
        return b;
    
    if(b==0)
        return a;
    
    if(a==b)
        return a;
    
    if(a>b)
        return gcd(a-b, b);
    
    return gcd(a, b-a);
    
}

int main(){

    int a,b;
    cin>>a>>b;

    int gc = gcd(a,b);
    cout<<gc<<endl;
    int lcm = a*b/gc;
    cout<<lcm<<endl;
    
    return 0;

}