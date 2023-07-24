/******************************************************************************

find the smallest no in array

linear search jesa krdiya, min me first index fir compare

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int smallestNo(int n, int arr[]){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}


int main()
{
    int arr1[] = {10,5,2,4,8};
    int n = 5;
    cout<<smallestNo(n, arr1);

    return 0;
}