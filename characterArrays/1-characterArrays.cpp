#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[] = "hello";

    cout<<sizeof(a);            //size = 6 because it is stored as hello\0

    int i[] = {1,2,3,4};
    
    cout<<endl<<a<<endl;        //prints the entire character array
    cout<<i<<endl;              //prints the address of the first element

    //HOW TO READ 
    cin>>       //breaks on white spaces
    cin.get()   //reads character wise
    cin.getline(a,maxlen,deliminator)//most appropriate for strings

    return 0;
}