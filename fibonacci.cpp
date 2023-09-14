/* 
Intuition: As we know fib(i) = fib(i-1) + fib(i-2).Simply iterate and go on 
calculating the ith term in the series.

Approach:

Take an array say fib of size n+1.The 0th term and 1st term are 0 and 1 respectively.
So fib(0)=0 and fib(1)=1.
Now iterate from 2 to n and calculate fib(n).fib(n)=fib(n-1) + fib(n-2).
Then print fib(0) + fib(1) + …………fib(n).
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  if(n==0){
      cout<<0;
  }
  else if (n==1){
      cout<<0<<" "<<1;
  }
  else{
      int fib[n+1];
      fib[0]=0;
      fib[1]=1;
      for(int i=2; i<n; i++){
          fib[i] = fib[i-1] + fib[i-2];
      }
      for(int i=0; i<n; i++){
          cout<<fib[i]<<" ";
      }
  }
}