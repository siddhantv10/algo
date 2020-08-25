#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int str = n;
    int sp = 0;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=sp; j++){
            cout<<"\t";
        }

        for(int k=1; k<= str; k++){
            if(k>1 and i>1 and i<=n/2 and k<str)
                cout<<"\t";
            else
                cout<<"*\t";
        }

        if(i<=n/2){
            sp++;
            str-=2;
        }
        else{
            sp--;
            str+=2;
        }

        cout<<endl;
    }

    return 0;
}