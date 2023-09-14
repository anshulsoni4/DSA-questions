/******************************************************************************

MAX and min digit

Example 1:
Input: N = 2746
Output: Largest digit: 7
        Smallest digit: 2

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

void revNo(int n){
    int d, maxi=INT_MIN, mini=INT_MAX;
    while(n!=0){
        d=n%10;
        maxi = max(maxi, d);
        mini = min(mini, d);
        n=n/10;
    }
    cout<<maxi<<"\n"
    <<mini;
}
 
int main() {

   int n = 27445;
   revNo(n);
   return 0;
 }
 
 
 