//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[], int N, int K) {
    unordered_map<int, int> sumCount; // Map to store prefix sums and their counts
    int sum = 0; // Initialize the current sum
    int maxLength = 0; // Initialize the maximum length

    for (int i = 0; i < N; i++) {
        sum += A[i]; // Calculate the current sum

        // If the current sum is equal to K, update maxLength
        if (sum == K) {
            maxLength = i + 1;
        }

        // If (sum - K) is present in the map, update maxLength
        if (sumCount.find(sum - K) != sumCount.end()) {
            maxLength = max(maxLength, i - sumCount[sum - K]);
        }

        // Store the current sum in the map along with its index
        if (sumCount.find(sum) == sumCount.end()) {
            sumCount[sum] = i;
        }
    }

    return maxLength;
}
 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends