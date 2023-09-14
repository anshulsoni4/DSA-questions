/******************************************************************************

Armstrong number bhai

Example 1:
Input:153 
Output: Yes, it is an Armstrong Number
Explanation: 1^3 + 5^3 + 3^3 = 153

Approach ->

- pehle last digit nikalo 
- fir usko sum variable me add krwao with usi no ka cube
- fir n/10 krke no hatao 
- bas

*******************************************************************************/
#include <iostream>  
using namespace std;  
int main()  
{  

int n,r,sum=0,temp;    
cin>>n;
temp = n;
while(n>0){
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}

if(temp==sum)    
cout<<"Armstrong Number."<<endl;    

else    
cout<<"Not Armstrong Number."<<endl;   

return 0;  
}  