/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

string removeSpace(char st[]){
    
    int count = 0;
    
    // first we iterate and after that we will check if white space is present or not
    // if present then we will store that in the count variable
    // and after that increase the counter.
    for(int i=0; st[i]; i++){
        if(st[i] != ' '){
            st[count] = st[i];
            count++;
        }
        
    }
    // we have added null character array, and this marks the end of the array
    st[count] = '\0';
    return st;
    
}


int main()
{
    char s[] = "take me to moon";
    cout<<removeSpace(s);

    return 0;
}
