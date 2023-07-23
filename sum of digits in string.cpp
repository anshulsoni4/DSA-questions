/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string temp = "";
int sum = 0;

int sumDig(string & s, int l){
    for(int i = 0; i<l; i++){
        // iterate kara and ab agar value digit me hai toh temp me store krdo
        if (s[i] >= '0' && s[i] <= '9'){
            temp += s[i];
        }
        // agar nahi hai, toh convert that into a digit from a no
        else{
            // convert the temp variable (string) to digit, and add it to sum.
            sum += atoi(temp.c_str());
            // wapas empty krdiya bas
            temp = "";
        }
    }
    // sum ko return krdo with converted thing
    return sum + atoi(temp.c_str());
}

int main()
{
     string s1 = "1ans24";
     int l = s1.length();
    cout<<sumDig(s1, l);
    return 0;
}
