/******************************************************************************

find the smallest no. in array

sol - we will apply sort() and after that we will return the first element

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int smallestNo(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr[0];
}

int main()
{
    vector<int>& arr1 = {2,5,3,2,8};
    
    cout<<smallestNo(arr1);

    return 0;
}
