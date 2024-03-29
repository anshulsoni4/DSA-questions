#include <iostream>
using namespace std;

void arrayPri(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[], int n){
    int p1, p2;
    p1 = 0, p2 = n-1;
    while(p1<p2){
        swap(arr[p1], arr[p2]);
        p1++, p2--;
    }
    arrayPri(arr, n);
}    




int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   reverseArray(arr, n);
   return 0;
}


//////////////////////////////////////////////// ANOTHER METHOD:

#include <bits/stdc++.h>
// #include<algorithm>
using namespace std;

void printArr(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i];
    }
}

void revArr(int ans[], int n){
    reverse(ans, ans+n);
}

int main()
{
    int arr[] = {2,6,3,1,8};
    int n = 5;
    
    revArr(arr, n);
    printArr(arr, n);
    
    return 0;
}
