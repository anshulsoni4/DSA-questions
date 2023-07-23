/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void capitalChar(string s, int l){
    // iterate kara stirng ke andar
    // fir first and last waale string ko humne captalize krdiya
    // 
    for(int i=0; i<l; i++){
        if(i == 0 || i == (l-1)){
            s[i] = towupper(s[i]);
        }
        // ab agar space ke baad koi char hai toh usko kra simple
        else if(s[i] == ' '){
            s[i-1] = towupper(s[i-1]);
            s[i+1] = towupper(s[i+1]);
        }
    }
    cout<<s;
}

int main()
{
    string s1 = "this will be a sentence";
    int l = s1.length();
    capitalChar(s1, l);

    return 0;
}