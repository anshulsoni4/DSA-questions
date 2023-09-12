/******************************************************************************
Prime no  - A prime number is a natural number that is only divisible by 1 and by itself.

ex = 1 2 3 5 7 11 13 17 19 

approach -> we wll run a loop from 2 to the total no of elements
- we check if the current no and given n no are divisible or not, if they are mean they are not prime 
- so return false, or return true

*******************************************************************************/
#include <iostream>
using namespace std;

bool prime_no(int n){
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
        
}

int main()
{
    int n = 11;
    bool ans = prime_no(n);
    if(n!=1 && ans ==true){
        cout<<"it is prime";
    }
    else{
        cout<<"not a prime";
    }
    
    return 0;
}