#include<bits/stdc++.h>
using namespace std;

int main(){
     int x = 10;

     int *xptr = &x;

     cout<<&x<<endl;
     cout<< xptr <<endl;

     cout<< *(&x)<<endl;
     cout<< *xptr <<endl;

     cout<< *(&xptr)<<endl;
     cout<< &(*xptr)<<endl;

     cout<< &xptr <<endl;
     int **xxptr = &xptr;       //pointer to a pointer
     cout<< xxptr <<endl;

    return 0;


}