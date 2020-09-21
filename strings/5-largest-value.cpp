#include<bits/stdc++.h>
using namespace std;

int comp(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);

    if(ab.compare(ba) > 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<string> s;

        int m;
        cin>>m;
        cin.get();
        
        for(int i=0; i<m; i++){
            string temp;
            cin>>temp;
            s.push_back(temp);
        }

        sort(s.begin(), s.end(), comp);

        for(int i=0; i<m; i++){
            cout<<s[i];
        }

        cout<<endl;
    }

    // cout<<endl;
    return 0;
}