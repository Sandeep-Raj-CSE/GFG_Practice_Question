//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int t[1001][1001]; //Creating a cache for fast response
    
    int LCS(string s1, string s2, int m, int n){
        // if both string is empty, then there'll be no LCS, hence, return 0.
        if(m == 0 || n == 0) return 0;
        
        // IF subproblem is already calculated then return from there
        if(t[m][n] != -1) return t[m][n];
        
        // If current element is valid LCS, then calculate from the reduced string  
        if(s1[m-1] == s2[n-1]){
            return t[m][n] = 1 + LCS(s1, s2, m-1, n-1);
        }
        // else calulate the max from each string by reducing it one by one
        else{
            return t[m][n] = max(LCS(s1, s2, m-1, n), LCS(s1, s2, m, n-1));
        }
    }
  
    int longestPalinSubseq(string A) {
        // Initializing our cache memory with all '-1'
        memset(t, -1, sizeof(t));
        
        // creating a reverser string of string 'A'
        string rev_A = string(A.rbegin(), A.rend());
        
        // Now Calculate the LCS of both of the string
        return LCS(A, rev_A, A.size(), A.size());
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends