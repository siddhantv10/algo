#include <bits/stdc++.h>
using namespace std;

int main(){

    //Static - Compile time allocation
    int b[100];
    cout<<sizeof(b)<<endl;
    cout<<b<<endl;      //from symbol table
    //b cannot be overwritten as it is read only (static memory)

    //Dynamic - Runtime allocation
    int n;
    cin>>n;
    int *a = new int[n]{0};     //initializes all elements with zero
    
    cout<<sizeof(a)<<endl;      //constant = will be sizeof pointer for your system
    cout<<a<<endl;      //from static memory
    // can be overwritten which will lead to memory leak


    //no change in working
    for(int i=0; i<n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }

    //Deallocation
    delete [] a;

    cout<<endl;
    return 0;   
}