#include<bits/stdc++.h>
using namespace std;

void increment(int x){
    x++;
    cout<<"Inside pass by value function: "<<x<<endl;
}

void increment(int *x){
    *x = *x + 1;;
    cout<<"Inside pass by reference function: "<<*x<<endl;

}

int main(){
    int x=10;

    increment(x);
    cout<<"Inside main after pass by value function: "<<x<<endl;

    increment(&x);
    cout<<"Inside main after pass by reference function: "<<x<<endl;

    return 0;
}