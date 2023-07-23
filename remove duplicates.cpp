/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

string removeDup(string s){
    string ans ="";
    for(int i=0; i<s.size(); i++){
        // wapas pura j zero hogya hai
        int j=0;
        // aur ye value badha di firse
        for(j=0; j<i; j++){
            // this will check ki s[i] wala element pehle agya hai ya nahi
            if(s[i] == s[j]){
                break;
            }
        }
        // agar dono same point pe hai toh ans stirng me daaldo, fir usi ko return krna
        if(i==j){
            ans += s[i];
        }
    }
    return ans;
}

int main()
{
    string s1 = "abcdc";
    cout<<removeDup(s1);

    return 0;
}