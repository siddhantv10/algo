#include<bits/stdc++.h>         //V IMP QUES
using namespace std;


int main(){

    int n;

    cin>>n;

    int sp = n/2;
    int st = 1;
    int val =1;

    for(int i=0; i<n; i++){
       
        
        for(int j=1; j<=sp; j++){
            cout<<"\t";
        }

        int cval = val;
        for(int k=1; k<=st; k++){
            // cout<<val<<"\t";
            
            if(k<=st/2){
                cout<<cval++<<"\t";
                
            }
            
            else{
                
                cout<<cval--<<"\t";
            }
            
        }

        if(i<n/2){
            sp--;
            st+=2;
            val++;
        }
        else{
            sp++;
            st-=2;
            val--;
        }
        cout<<endl;
    }

    return 0;
}