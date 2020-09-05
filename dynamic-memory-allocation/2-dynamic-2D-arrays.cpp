#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,c;
    cin>>n>>c;

    int **arr = new int* [n];       //array of row heads

    //create a 2D array
    for(int i=0; i<n; i++){
        arr[i] = new int [c]{0};    //initialized with 0
    }    

    int val =1;
    for(int i=0; i<n; i++){
        for(int j=0; j<c; j++){
            arr[i][j] = val++;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}