#include <bits/stdc++.h> 

using namespace std; 
#define MAX 100
double glasses[MAX][MAX];

int water(int start) 
{ 
    glasses[0][0] = start;      //top glass

    int level = 0;              //keeping a count of how deep the water goes
    bool remainingWater = true; //check if water is remaining ie if flowing water is >1
    
    while(remainingWater){      //loop runs till there is remaining water

        remainingWater = false; //assume water is finished

        for(int j=0; j<=level; j++){   //fill all glasses in the level row

            if(glasses[level][j] > 1){  //if the glass has >1 water means water is still flowing
                //hence store water
                double extraWater = glasses[level][j] - 1;
                glasses[level][j] = 1;
                glasses[level+1][j] += extraWater/2;
                glasses[level+1][j+1] += extraWater/2;
                remainingWater = true;
            }
        }
        level++;
    }

    return level-1;
} 

// Driver code 
int main() 
{ 
	 
    int start;
    cin>>start;
	int finalLength = water(start);

    for(int i=0; i<= finalLength; i++){
        for(int k = finalLength-i-1; k>=0; k--){    //to print in triangle form
            cout<<" ";
        }
        for(int j=0; j<=finalLength; j++)           //printing only used part of 2D array
            if(j<=i)
                cout<<glasses[i][j]<<" ";
        cout<<endl;
    }
	return 0; 
} 

// This code is contributed by Code_Mech 
