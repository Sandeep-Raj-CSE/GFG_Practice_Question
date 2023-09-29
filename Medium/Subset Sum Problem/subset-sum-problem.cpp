//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int w){
        // code here 
        
        int n=arr.size();
        
        int dp[n+1][w+1];
        
        // 
        
        for(int i=0; i<n+1;i++)
        
        {
            for(int j=0; j<w+1;j++)
            {
                if(i==0)
                {
                    dp[i][j]=false;
                }
                
                if(j==0){
                    dp[i][j]=true;
                }
            }
        }
        
        // we have choice we sho
        
        
            for(int i=1; i<n+1;i++){
            for(int j=1; j<w+1;j++){
                
                      if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
                }
                else
                {
                     dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][w];

        
        
        
        
      
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends