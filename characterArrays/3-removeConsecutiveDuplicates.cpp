#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[1000];
    cin.getline(a,1000);

    int i=0; int j=1;
    while(a[j] != '\0'){
        
        if(a[j]==a[i]){
            j++;
        }

        else{
            a[++i] = a[j];
        }
    }
    a[++i] = '\0';

    cout<<a<<endl;

    return 0;
}