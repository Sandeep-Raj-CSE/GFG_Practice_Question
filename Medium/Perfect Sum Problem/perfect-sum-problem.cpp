//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int perfectSum(int arr[],int n, int sum) {
 int MOD = 1e9 + 7;

        // Initialize a 1D array to store the count of subsets
        int dp[sum + 1];
        memset(dp, 0, sizeof(dp));

        // There is one way to make sum = 0, which is by not including any element
        dp[0] = 1;

        // Fill the dp array using a bottom-up approach
        for (int i = 0; i < n; i++) {
            for (int j = sum; j >= arr[i]; j--) {
                // If the current element can be included in the subset
                // (i.e., it is less than or equal to the current sum),
                // update dp[j] by adding dp[j - arr[i]]
                dp[j] = (dp[j] + dp[j - arr[i]]) % MOD;
            }
        }

        // The result is stored in dp[sum]
        return dp[sum];
}



	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends