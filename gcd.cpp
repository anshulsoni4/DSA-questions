/******************************************************************************

GCD ->

Example 1:
Input: num1 = 4, num2 = 8
Output: 4
Explanation: Since 4 is the greatest number which divides both num1 and num2.


*******************************************************************************/
#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int main()
{
    int a = 4;
    int b = 8;
    
    cout<<gcd(a,b);

    return 0;
}