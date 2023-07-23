// using the 2 pointer approach.


#include <bits/stdc++.h>
using namespace std;

void swapFun(string & a, int i, int j){
    char temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void reverseStr (string & a){
    int i=0;
    int j= a.length()-1;
    while(i<j){
        // fucntion for swap used here
        swapFun(a,i,j);
        i++;
        j--;
    }
}


int main()
{
    string s = "reverse this";
    reverseStr(s);
    cout<<s;

    return 0;
}


// this is the using the built functions

//     string s = "reverse this";
//     reverse(s.begin(), s.end());
//     cout << s;