/******************************************************************************

find the smallest no in array

linear search jesa krdiya, min me first index fir compare

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,6,3,1,8};
    int n = 5;
    for(int i=0; i<n; i++){
        if(arr[0] > arr[i]){
            arr[0] = arr[i];
        }
        
    }
    cout<<arr[0];
    return 0;
}
