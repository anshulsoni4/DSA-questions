/******************************************************************************

Sum of ap series

formula of sum of aP - Sn -> (n/2.0)* (2.0*a + (n-1)d)

Example 1:
Input:
n=4
a=2
d=2
Output: 20

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

float sumAp(float a, float d, int n){
    float sum =  (n/2.0)* (2.0*a + (n-1) * d);
    return sum;
}
 
int main() {

   float a=2, d=2;
   int n=4;
   cout<<sumAp(a, d, n);
 }