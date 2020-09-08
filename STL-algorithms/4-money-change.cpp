#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a<=b;
}

int main(){

    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(coins)/sizeof(coins[0]);
    int money;
    cin>>money;
    cout<<"sum = ";

    while(money>0){
        auto lb = lower_bound(coins, coins+n, money, compare) - coins -1;

        money = money - coins[lb];

        cout<<coins[lb]<<" ";
        
    }

    return 0;
}