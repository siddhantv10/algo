#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,no;
    cin>>n;
    //contant size array O(1)
    int count[64] = {0};

    for(int i=0; i<n; i++){
        cin>>no;

        int j=0;
        while(no>0){
            int last_bit = no&1;
            count[j] += last_bit;

            j++;
            no = no>>1;
        }
    }

    int ans = 0;
    int p = 1;
    for(int i=0; i<64; i++){
        count[i] = count[i]%3;
        ans = ans + (count[i]*p);
        p = p<<1;
    }

    cout<<ans<<endl;
    return 0;
}