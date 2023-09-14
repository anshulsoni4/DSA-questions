/******************************************************************************

reverse no 

Example 1:
Input: N = 472
Output: 274
Explanation: Reading the number from back to front, we see that the output should be 274

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int revNo(int n){
    int rev=0, sum;
    while(n!=0){
        sum=n%10;
        rev=rev*10+sum;
        n=n/10;
    }
    return rev;
}
 
int main() {

   int n = 274;
   cout<<revNo(n);
   return 0;
 }
 
 
 