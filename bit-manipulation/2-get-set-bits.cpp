#include <bits/stdc++.h>
using namespace std;

bool isOdd(int n)
{
    return (n & 1); //checks last bit
}

//find i'th bit from right
int getBit(int n, int i)
{
    int mask = 1 << i;
    int bit = mask & n;
    return (bit > 0);
}

//set i'th bit from right
int setBit(int n, int i)
{
    int mask = 1 << i;

    return mask | n;
}

//clear i'th bit from right
int clearBit(int n, int i)
{
    int mask = 1 << i;
    mask = ~mask;

    return n & mask;
}

int rightmostSetBit(n){
    return n & ~(n-1);
}

//clear the bit first and then update it
int updateBit(int n, int i, int v)
{
    n = clearBit(n, i);
    int mask = v << i;

    return n | mask;
}

int main()
{
    int n;
    cin >> n;

    int i;
    cin >> i;

    int v;
    cin >> v;

    cout << updateBit(n, i, v) << endl;
    return 0;
}