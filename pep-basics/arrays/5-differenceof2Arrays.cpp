#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1;

    int a1[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    cin >> n2;
    int a2[n2];

    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    int diff[n2];
    int b = 0;

    int i = n1 - 1;
    int j = n2 - 1;
    int k = n2 - 1;

    while(k>=0){
        int d = 0;

        if(b==1){
            a2[j]--;
            b=0;
        }

        if(i>=0){
            if(a2[j]<a1[i]){
                d += 10 + a2[j]-a1[i];
                b=1;    
            } 

            else{
                d += a2[j] - a1[i];
                b=0;
            }
        }

        else{
            d = a2[j];
            b=0;
        }

        diff[k] = d;

        i--;
        j--;
        k--;

    }

    int idx = 0;
    while(idx < n2){
        if(diff[idx] == 0)
            idx++;
        
        else{
            break;
        }
    }


    for(int i=idx; i<n2; i++){
        cout<<diff[i]<<endl;
    }
    return 0;
}