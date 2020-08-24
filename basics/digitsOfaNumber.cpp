#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int n;
    cin>>n;


    int temp = n;
    int power =1;

    while(temp >10){
        temp = temp/10;
        power *= 10;
    }

    while(power>0){
        cout<<n/power<<endl;
        n = n%power;
        power /= 10;
    }


    return 0;
}