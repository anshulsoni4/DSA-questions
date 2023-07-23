/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    string s = "aanshull";
    int freq[26] = {0};
    for(int i=0; i<s.size(); i++){
        freq[s[i] - 'a']++;
    }
    for(int i=0; i<26; i++){
        if(freq[i] > 1){
            cout<<(char)(i+'a')<<freq[i]<<endl;
        }
    }

    return 0;
}