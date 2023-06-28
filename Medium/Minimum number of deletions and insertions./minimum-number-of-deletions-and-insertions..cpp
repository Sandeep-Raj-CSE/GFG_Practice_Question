//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	
	 

        int dp[1001][1001];
        
        int lcs(string s1,string s2,int m,int n){
            
             for(int i=0; i <m+1; i++){
            for(int j=0; j<n+1;j++){

                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }


        for(int i=1; i<m+1;i++){
            for(int j=1; j<n+1;j++){

                if(s1[i-1] == s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[m][n];
            
        }


       

	int minOperations(string s1, string s2) 
	{ 
	    // Your code goes here
	    
	      int m= s1.size();
        int n=s2.size();
        
        
        int val=lcs(s1,s2,m,n);
	    
	    
	    int ins=m-val;
	    int del=n-val;
	    
	    return ins + del;
	    
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends