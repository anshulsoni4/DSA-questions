/******************************************************************************

even or odd

Input: n=5
Output: odd
Explanation: 5 is not divisible by 2.

*******************************************************************************/
#include <iostream>  
using namespace std;  

int rev(int x){
    return(x % 2);
}

int main()  
{  

int x = 6;
if(rev(x) == 0){
    cout<<"even";
}
else{
    cout<<"odd";
}

return 0;  
}  