//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
           long long prod=1;
        int count =0;
        int left=0;
        int right=0;
        //right and left are the pointers to start and end of window
        for(right=0;right<n;right++)
        {
            prod=prod*a[right];
            
            while(prod>=k && left<=right)
            {
                prod=prod/a[left];
                left++;
            }
            
            if(prod<k)
            {
                //As we add one element to the left side of our window it produces (right-left+1)
                count=count + right-left+1;
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends