/******************************************************************************

find the largest no in array

linear search jesa krdiya, min me first index fir compare

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
 
int sortArr(int n, int arr[]) {
    
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
    
}
 
int main() {
    int n=4;
    int arr1[] = {1,2,3,4};
    
    cout<<sortArr(n,arr1);
    
   
    return 0;
}