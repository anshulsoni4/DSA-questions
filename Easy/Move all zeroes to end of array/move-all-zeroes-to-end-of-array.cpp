//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
// 	zero aya toh skip krdo aage 
// non zero aya toh swap krdo zero waale se toh apne aap zero aage agya (roght me)
	
	void pushZerosToEnd(int arr[], int n) {
	    int left=0, right=0;
	    int temp; 
	    
	    while(right<n){
	        if(arr[right] == 0){
	            right++;
	        }
	        else{
	            temp = arr[left];
	            arr[left] = arr[right];
	            arr[right] = temp;
	            ++right;
	            ++left;
	        }
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends