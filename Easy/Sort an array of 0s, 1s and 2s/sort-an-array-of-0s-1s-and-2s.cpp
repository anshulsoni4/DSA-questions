//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int l=0, i=0 ,r = n - 1;
        while(i<=r){
            // when current element is 0, swap with L, and increment
            if(a[i] == 0){
            swap(a[l++], a[i++]);
            
            }
            // when current element is 2 swap with r and decrement of r 
            else if(a[i] == 2){
                swap(a[i], a[r--]);
                
            }
            // 1 wala case hogya hai ye
            else {
                i++;
            }

        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends