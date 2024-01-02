/******************************************************************************

find the smallest no. in array

sol - we will apply sort() and after that we will return the first element

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int> ans){
    sort(ans.begin(), ans.end());
    return ans[0];
}

int main()
{
    vector<int> ans1 = {2,6,3,1,8};
    // int n = ans.size();
    
    cout<<sortArr(ans1);
    
    return 0;
}
