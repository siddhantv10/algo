//The inverse of a number is defined as the number created by interchanging the face value and 
//index of digits of number.e.g. for 426135 the inverse will be 416253
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temp=n;
    int d=1;
    int s =0;
    int power = 1;

    while(temp){
        
        power = pow(10,(temp%10)-1);
        s += d*power;

        temp /=10;
        d++;
    }

    cout<<s<<endl;
    return 0;
}

