/******************************************************************************

find sec largest and sec smallest


*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
 
void getEle(int n, int arr[]) {
    
    // edge case when n is 1;
    if(n==0 || n==1){
        cout<<-1<<" "<<-1<<endl;
    }
        int lar=INT_MAX, sec_lar=INT_MAX;
        int sma=INT_MIN, sec_sma=INT_MIN;
        
        int i;
        for(i=0; i<n; i++){
            sma = min(lar, arr[i]);
            lar = max(sma, arr[i]);
        }
        for(i=0; i<n; i++){
            if(sec_sma<arr[i] && sma!=arr[i])
                sec_sma = arr[i];
                
            if(sec_lar>arr[i] && lar!=arr[i])
                sec_lar=arr[i];
        }
    cout<<sec_sma<<endl;
    cout<<sec_lar<<endl;
    
    
}
 
int main() {
    int arr1[] = {1,2,3,4};
    int n=sizeof(arr1)/sizeof(arr1[0]);
   
    
    getEle(n,arr1);
    
   
    return 0;
}