#include<bits/stdc++.h>

using namespace std;

int main(){

    long int n;
    cin>>n;

    int nod =0;
    long int temp = n;

    while(temp>0){
        temp /=10;
        nod++;          //FInd total number of digits

    }

    // int k=1;
    long int s=0;
    for(int i=1; i<=nod; i++){
        int p = n%10;
        s += i*pow(10,p);       //MOST IMPORTANT LINE
        n/=10;
    }

    cout<<s<<endl;

    return 0;
}