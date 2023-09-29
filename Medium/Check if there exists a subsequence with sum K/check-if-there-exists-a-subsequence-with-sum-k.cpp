//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    bool fun( int i , vector<int>&arr , int n, int k , int sum )
    {
        if(sum > k )
        return false;

        if(sum== k)
        return true;
        if(i ==n)
        {
            if(sum != k)
            return false;
        }
        if(fun( i+1 , arr ,n, k , sum+ arr[i] ) )
        return true;
        if( fun(i +1 , arr ,n, k , sum ) )
        return true;
        
        return false;
    }
    
    bool checkSubsequenceSum(int n, vector<int>& arr, int k)
    {
        // Code here
        int sum  = 0 ;
        bool flag = fun (  0 , arr , n, k , sum);
        return flag;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> arr;
        
        for(int i=0; i<n; ++i){
            int x; cin>>x;
            arr.push_back(x);
        }
        
        Solution obj;
        bool ans = obj.checkSubsequenceSum(n, arr, k);
        cout<<( ans ? "Yes" : "No")<<"\n";
    }
    return 0;
}
// } Driver Code Ends