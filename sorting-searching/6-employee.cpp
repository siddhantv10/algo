#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> p1, pair<string,int> p2){

    if(p1.second == p2.second){
        return p1.first < p2.first;
    }

    else{
        return p1.second > p2.second;
    }
}

int main()
{
    int t;
    cin >> t;

    int n;
    cin >> n;
    cin.get();
    
    pair<string, int> p[n];

    string s; int y;

    for(int i=0; i<n; i++){
        cin>>s>>y;
        p[i] = make_pair(s,y);
    }

    sort(p, p+n, comp);

    for(int i=0; i<n; i++){

        if(p[i].second >= t){
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }

    return 0;
}
