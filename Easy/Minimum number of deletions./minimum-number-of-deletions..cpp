//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends

int longestPalinSubseq(string s1, int m) {
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        int n = m;
        
        int dp[m+1][n+1];
        
        for(int i=0;i<m+1;i++)
            dp[i][0]=0;
            
        for(int j=0;j<n+1;j++)
            dp[0][j]=0;
            
        for(int i=1;i<m+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else 
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[m][n];
    }

int minDeletions(string str, int n) { 
    int len_lcs = longestPalinSubseq(str, n);
    
    return n-len_lcs;
} 