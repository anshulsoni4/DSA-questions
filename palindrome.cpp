/******************************************************************************
Input: N =  121 
Output: Palindrome Number

check if no is palindrome or no

approach ->

- ek function bnao jaha pe we will first, - remove last digit
- ek variable bnake usme add krdo uss last digit ko 
- fir uske baad used last digit ko remove krdo 
- main fuinction me ek variable bnao jisme rev funciton store hora
- and then compare ki function wala and given no equal hai ya nahi.
*******************************************************************************/
#include <iostream>
using namespace std;

int palin_rev(int X){
    int Y = 0;
    while(X>0){
        // we will extract the last digit
        int digit = X % 10;
        // append in Y and store the last digit 
        Y= Y * 10 + digit;
        // jo last me digit use hogyi hai usko discard krdenge
        X = X/10;
    }
    return Y;
}

int main()
{
    int X = 121;
    int digi = X;
    int Y = palin_rev(X);
    if(Y == digi){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }

    return 0;
}