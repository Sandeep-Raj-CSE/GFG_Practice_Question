//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    
	    // copy the arr
	    int vec[n];
	    
	    for(int i=0; i<n;i++){
	        vec[i]=arr[i];
	    }
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(arr[i] > arr[j]){
	                vec[i]=max(vec[i],arr[i]+vec[j]);
	            }
	        }
	    }
	    
	    
	    int ans=*max_element(vec,vec+n);
	    return ans;
	   
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends