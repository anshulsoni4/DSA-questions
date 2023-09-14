/******************************************************************************

Sum of GP series

formula of sum of GP -> a * (pow(r, n) - 1) / (r - 1);

Example 1:
Input: a=1 , r=0.5 , n=3
Output: 1.75
Explanation: The sum of given GP Series is 1.7

*******************************************************************************/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

float sumAp(float a, float r, int n){
    float sum =  a * (pow(r, n) - 1) / (r - 1);
    return sum;
}
 
int main() {

   float a=1, r=0.5;
   int n=3;
   cout<<sumAp(a, r, n);
 }