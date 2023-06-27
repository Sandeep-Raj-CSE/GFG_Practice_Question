//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int arr[], int n)
    {
    	//code here.
    // 	sort(arr,arr+n);
    // //	int max=arr[n-1];
    // 	int min=arr[0];
    	
   int &min = *min_element(arr,arr+n );
    int &max = *max_element(arr,arr+n );
    	return (max+min);
    	
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends