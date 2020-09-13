#include<bits/stdc++.h>
using namespace std;

//MAXIMIZE the Minimum distance

bool placeCow(int stalls[], int n, int c, int min_sep){
    
    int last_cow = stalls[0];   //place the first cow in the first stall
    int count = 1;

    for(int i=1; i<n; i++){

        if(stalls[i] - last_cow >= min_sep){    //min sep
            last_cow = stalls[i];
            count++;
            if(count == c){
                return true;
            }
        }
    }

    return false;
}

int main(){
    int n,c;        //n = 5
    cin>>n>>c;      //c = 3

    int stalls[n];
    for(int i=0; i<n; i++) cin>>stalls[i];

    sort(stalls,stalls+n);

    //binary_search
    int s = 0;
    int e = stalls[n-1] - stalls[0];    //max separation ie sep btw 1st and last stall

    int ans = 0;
    while(s <= e){
        int mid = (s+e)/2;          //minimum separation we are checking 

        bool canWePlaceCow = placeCow(stalls, n, c, mid);

        if(canWePlaceCow){
            ans = mid;
            s = mid + 1;    //maximize
        }

        else{
            e = mid - 1;
        }
    }

    cout<<ans<<"\n";
    return 0;
}