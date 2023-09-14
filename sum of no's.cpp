/******************************************************************************

sum of no's

Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
 void solve(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
    }
    cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
  }
 int main() {

    solve(5);
    solve(6);
 }