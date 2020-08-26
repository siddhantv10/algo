#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;

    cin>>n;


    int temp = n;
    // int rev=0;
    while(temp>0){
        cout<<temp%10<<endl;
        temp /=10;

    }

    return 0;
}