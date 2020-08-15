 #include <iostream> 
using namespace std; 


string ToStr( char c ) {
   return string( 1, c );
}

int getMinimumPenalty(string x,string y,int pgap,int pxy)  // x and y are given input strings. pgap and pxy are given mismatch scores.
{
    int res=0;
    
    // WRITE YOUR CODE HERE
    int i=0;
    int j=0;
    int n1 = x.length()-1;
    
    while(i<n1){
        if(x[i]==y[j]){
            i++;
            j++;
        }

        string z = x.substr(i,n1);

        if(j!=z.find(y[j])+i){
            res+=pgap;
            y.insert(j, ToStr('_'));
            j++;
            i++;
        }
        
        if(isalpha(y[j])){
            res+=pxy;
            i++;
            j++;
        }
    }

    return res;
}

int main()
{
    string gene1,gene2;
    int gapPenalty,misMatchPenalty;
    cin>>gene1>>gene2;
    cin>>gapPenalty;
    cin>>misMatchPenalty;
    cout<<getMinimumPenalty(gene1, gene2, gapPenalty, misMatchPenalty);
}