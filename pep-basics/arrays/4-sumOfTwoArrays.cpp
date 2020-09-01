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

    cin>>n2;
    int a2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    int sum[n1>n2? n1+1: n2+1];
    int c=0;

    int i=n1-1;
    int j=n2-1;
    int k=(sizeof(sum)/sizeof(sum[0]))-1;

    while(k>=0){
        int d = c;

        if(i>=0){
            d += a1[i];
        }

        if(j>=0){
            d+=a2[j];
        }
        c = d/10;
        d = d%10;
        sum[k] = d;

        i--;
        j--;
        k--;

    }
    int n3 = sizeof(sum)/sizeof(sum[0]);
    for(int i=0; i<n3; i++){
        cout<<sum[i]<<endl;
    }
    
    return 0;
}