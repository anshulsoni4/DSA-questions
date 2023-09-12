/******************************************************************************
Prime no in given range

Input: 2 10
Output: 2 3 5 7 
Explanation: Prime Numbers b/w 2 and 10 are 2,3,5 and 7.
*******************************************************************************/
#include <iostream>
using namespace std;

bool isPrime (int n){
    for(int i=2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int a = 1;
    int b = 20;
    for(int i=0; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}