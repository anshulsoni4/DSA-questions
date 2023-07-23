/******************************************************************************

agar sirf puchja hai number of characters toh if condition ki need nahi hai;

and no of wordss puche hai toh usme use the if wala condition

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "hello anshul";
    
    int n = s1.size();
    int spaces=0;
    for(int i=0; i<n; i++){
        // hum log spaces count krre and usse words ko define krre ki kitne hai
        // jese 3 word me 2 space hogi, toh cout krdenge space+1, yaani 3 wordss 
        // i guess easy hai 
        if(s1[i] == ' ')
        spaces = spaces+1;
    }
    
    cout<<spaces+1;
    
    return 0;
}