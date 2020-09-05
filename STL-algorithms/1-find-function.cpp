#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    //Find functin 

    int key;
    cin>>key;

    auto it = find(a,a+n, key);     //return the address of the index where key is
                                    
    int index = it - a;

    if(index == n){                 //will be length of array if not present
        cout<<"not found. "<<endl;
    }
    else{
        cout<<"found at index: "<<index<<endl;
    }


    return 0;


}