/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    
    q.push(1);
    q.push(0);
    q.push(2);
    q.push(4);
    
    int n = q.size();
    for(int i=0; i<n; i++){
        cout<<q.top()<<endl;
        q.pop();
    }
    
    return 0;
}
