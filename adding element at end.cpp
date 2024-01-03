/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void insertEnd(int arr[], int n, int value){
    arr[n] = value;
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int value = 10;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    insertEnd(arr, n, value);
    for(int i =0;i<=n;i++){
        cout<<arr[i];
    }
    return 0;
}
