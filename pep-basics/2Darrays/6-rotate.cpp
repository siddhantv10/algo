#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    //FOR A TRANSPOSE WE SWAP ELEMENTS WHICH HAVE DIFFERENT VALUES, ONLY PRIMARY DIAGONAL REMAINS SAME
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            if(i<j)
                swap(a[i][j], a[j][i]);
        }
    }

    //REVERSING THE ROWS
    for(int i=0; i<n; i++){
        int sc =0;
        int ec = m-1;

        while(sc<ec){
            swap(a[i][sc], a[i][ec]);
            sc++;
            ec--;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}