/******************************************************************************

reverse array 


*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
 
void printArr(int arr[], int n){
    cout<<"output - "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


void reverse(int arr[], int st, int en) {
    
    if(st<en){
        swap(arr[st], arr[en]);
        reverse(arr, st+1, en-1);
    }
    
}
 
int main() {
    int arr1[] = {1,2,3,4};
    int n=4;
    
    reverse(arr1, 0, n-1);
    printArr(arr1, n);
    
   
    
   
    return 0;
}